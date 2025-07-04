#include <webbind/DOMRectList.hpp>
#include <webbind/DOMRect.hpp>


DOMRectList DOMRectList::take_ownership(Handle h) noexcept {
        return DOMRectList(h);
    }
DOMRectList DOMRectList::clone() const noexcept { return *this; }
DOMRectList::DOMRectList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMRectList::DOMRectList(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long DOMRectList::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

DOMRect DOMRectList::item(unsigned long index) {
    return emlite::Val::call("item", index).as<DOMRect>();
}

