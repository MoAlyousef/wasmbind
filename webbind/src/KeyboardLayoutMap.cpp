#include <webbind/KeyboardLayoutMap.hpp>


KeyboardLayoutMap KeyboardLayoutMap::take_ownership(Handle h) noexcept {
        return KeyboardLayoutMap(h);
    }
KeyboardLayoutMap KeyboardLayoutMap::clone() const noexcept { return *this; }
KeyboardLayoutMap::KeyboardLayoutMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
KeyboardLayoutMap::KeyboardLayoutMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


