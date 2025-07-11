#include <webbind/PaintSize.hpp>


PaintSize PaintSize::take_ownership(Handle h) noexcept {
        return PaintSize(h);
    }
PaintSize PaintSize::clone() const noexcept { return *this; }
PaintSize::PaintSize(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaintSize::PaintSize(const emlite::Val &val) noexcept: emlite::Val(val) {}


double PaintSize::width() const {
    return emlite::Val::get("width").as<double>();
}

double PaintSize::height() const {
    return emlite::Val::get("height").as<double>();
}

