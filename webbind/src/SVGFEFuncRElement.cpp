#include <webbind/SVGFEFuncRElement.hpp>


SVGFEFuncRElement SVGFEFuncRElement::take_ownership(Handle h) noexcept {
        return SVGFEFuncRElement(h);
    }
SVGFEFuncRElement SVGFEFuncRElement::clone() const noexcept { return *this; }
SVGFEFuncRElement::SVGFEFuncRElement(Handle h) noexcept : SVGComponentTransferFunctionElement(emlite::Val::take_ownership(h)) {}
SVGFEFuncRElement::SVGFEFuncRElement(const emlite::Val &val) noexcept: SVGComponentTransferFunctionElement(val) {}


