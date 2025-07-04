#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSStyleProperties;


class CSSKeyframeRule : public CSSRule {
    explicit CSSKeyframeRule(Handle h) noexcept;

public:
    explicit CSSKeyframeRule(const emlite::Val &val) noexcept;
    static CSSKeyframeRule take_ownership(Handle h) noexcept;

    CSSKeyframeRule clone() const noexcept;
    jsbind::CSSOMString keyText() const;
    void keyText(const jsbind::CSSOMString& value);
    CSSStyleProperties style() const;
};

