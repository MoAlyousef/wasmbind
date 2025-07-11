#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PaymentRequestUpdateEvent.hpp"
#include "enums.hpp"


class PaymentMethodChangeEvent : public PaymentRequestUpdateEvent {
    explicit PaymentMethodChangeEvent(Handle h) noexcept;

public:
    explicit PaymentMethodChangeEvent(const emlite::Val &val) noexcept;
    static PaymentMethodChangeEvent take_ownership(Handle h) noexcept;

    PaymentMethodChangeEvent clone() const noexcept;
    PaymentMethodChangeEvent(const jsbind::DOMString& type);
    PaymentMethodChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString methodName() const;
    jsbind::Object methodDetails() const;
};

