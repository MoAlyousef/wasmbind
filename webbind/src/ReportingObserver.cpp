#include <webbind/ReportingObserver.hpp>


ReportingObserver ReportingObserver::take_ownership(Handle h) noexcept {
        return ReportingObserver(h);
    }
ReportingObserver ReportingObserver::clone() const noexcept { return *this; }
ReportingObserver::ReportingObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReportingObserver::ReportingObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}


ReportingObserver::ReportingObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("ReportingObserver").new_(callback)) {}

ReportingObserver::ReportingObserver(const jsbind::Function& callback, const jsbind::Any& options) : emlite::Val(emlite::Val::global("ReportingObserver").new_(callback, options)) {}

jsbind::Undefined ReportingObserver::observe() {
    return emlite::Val::call("observe").as<jsbind::Undefined>();
}

jsbind::Undefined ReportingObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::Any ReportingObserver::takeRecords() {
    return emlite::Val::call("takeRecords").as<jsbind::Any>();
}

