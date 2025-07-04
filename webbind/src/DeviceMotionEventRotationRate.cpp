#include <webbind/DeviceMotionEventRotationRate.hpp>


DeviceMotionEventRotationRate DeviceMotionEventRotationRate::take_ownership(Handle h) noexcept {
        return DeviceMotionEventRotationRate(h);
    }
DeviceMotionEventRotationRate DeviceMotionEventRotationRate::clone() const noexcept { return *this; }
DeviceMotionEventRotationRate::DeviceMotionEventRotationRate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DeviceMotionEventRotationRate::DeviceMotionEventRotationRate(const emlite::Val &val) noexcept: emlite::Val(val) {}


double DeviceMotionEventRotationRate::alpha() const {
    return emlite::Val::get("alpha").as<double>();
}

double DeviceMotionEventRotationRate::beta() const {
    return emlite::Val::get("beta").as<double>();
}

double DeviceMotionEventRotationRate::gamma() const {
    return emlite::Val::get("gamma").as<double>();
}

