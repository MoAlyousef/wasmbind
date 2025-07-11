#include <webbind/CSSMathProduct.hpp>
#include <webbind/CSSNumericArray.hpp>


CSSMathProduct CSSMathProduct::take_ownership(Handle h) noexcept {
        return CSSMathProduct(h);
    }
CSSMathProduct CSSMathProduct::clone() const noexcept { return *this; }
CSSMathProduct::CSSMathProduct(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}
CSSMathProduct::CSSMathProduct(const emlite::Val &val) noexcept: CSSMathValue(val) {}


CSSMathProduct::CSSMathProduct(const jsbind::Any& args) : CSSMathValue(emlite::Val::global("CSSMathProduct").new_(args)) {}

CSSNumericArray CSSMathProduct::values() const {
    return CSSMathValue::get("values").as<CSSNumericArray>();
}

