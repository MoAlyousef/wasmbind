#include <webbind/PerformanceNavigation.hpp>


PerformanceNavigation PerformanceNavigation::take_ownership(Handle h) noexcept {
        return PerformanceNavigation(h);
    }
PerformanceNavigation PerformanceNavigation::clone() const noexcept { return *this; }
PerformanceNavigation::PerformanceNavigation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceNavigation::PerformanceNavigation(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned short PerformanceNavigation::type() const {
    return emlite::Val::get("type").as<unsigned short>();
}

unsigned short PerformanceNavigation::redirectCount() const {
    return emlite::Val::get("redirectCount").as<unsigned short>();
}

jsbind::Object PerformanceNavigation::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

