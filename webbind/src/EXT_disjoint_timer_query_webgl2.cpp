#include <webbind/EXT_disjoint_timer_query_webgl2.hpp>
#include <webbind/WebGLQuery.hpp>


EXT_disjoint_timer_query_webgl2 EXT_disjoint_timer_query_webgl2::take_ownership(Handle h) noexcept {
        return EXT_disjoint_timer_query_webgl2(h);
    }
EXT_disjoint_timer_query_webgl2 EXT_disjoint_timer_query_webgl2::clone() const noexcept { return *this; }
EXT_disjoint_timer_query_webgl2::EXT_disjoint_timer_query_webgl2(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EXT_disjoint_timer_query_webgl2::EXT_disjoint_timer_query_webgl2(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined EXT_disjoint_timer_query_webgl2::queryCounterEXT(const WebGLQuery& query, const jsbind::Any& target) {
    return emlite::Val::call("queryCounterEXT", query, target).as<jsbind::Undefined>();
}

