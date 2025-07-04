#include <webbind/SVGNumber.hpp>


SVGNumber SVGNumber::take_ownership(Handle h) noexcept {
        return SVGNumber(h);
    }
SVGNumber SVGNumber::clone() const noexcept { return *this; }
SVGNumber::SVGNumber(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGNumber::SVGNumber(const emlite::Val &val) noexcept: emlite::Val(val) {}


float SVGNumber::value() const {
    return emlite::Val::get("value").as<float>();
}

void SVGNumber::value(float value) {
    emlite::Val::set("value", value);
}

