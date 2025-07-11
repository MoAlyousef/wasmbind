#include <webbind/PerformanceMeasure.hpp>


PerformanceMeasure PerformanceMeasure::take_ownership(Handle h) noexcept {
        return PerformanceMeasure(h);
    }
PerformanceMeasure PerformanceMeasure::clone() const noexcept { return *this; }
PerformanceMeasure::PerformanceMeasure(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceMeasure::PerformanceMeasure(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any PerformanceMeasure::detail() const {
    return PerformanceEntry::get("detail").as<jsbind::Any>();
}

