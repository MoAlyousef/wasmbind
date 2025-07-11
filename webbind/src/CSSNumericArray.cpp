#include <webbind/CSSNumericArray.hpp>
#include <webbind/CSSNumericValue.hpp>


CSSNumericArray CSSNumericArray::take_ownership(Handle h) noexcept {
        return CSSNumericArray(h);
    }
CSSNumericArray CSSNumericArray::clone() const noexcept { return *this; }
CSSNumericArray::CSSNumericArray(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSNumericArray::CSSNumericArray(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long CSSNumericArray::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

