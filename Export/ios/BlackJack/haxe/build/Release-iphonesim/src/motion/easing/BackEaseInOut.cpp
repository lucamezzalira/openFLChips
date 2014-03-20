#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseInOut
#include <motion/easing/BackEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseInOut_obj::__construct(Float s)
{
HX_STACK_FRAME("motion.easing.BackEaseInOut","new",0xfd1f833b,"motion.easing.BackEaseInOut.new","motion/easing/Back.hx",81,0x81c0c12c)

HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(81)
	this->s = s;
}
;
	return null();
}

//BackEaseInOut_obj::~BackEaseInOut_obj() { }

Dynamic BackEaseInOut_obj::__CreateEmpty() { return  new BackEaseInOut_obj; }
hx::ObjectPtr< BackEaseInOut_obj > BackEaseInOut_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseInOut_obj > result = new BackEaseInOut_obj();
	result->__construct(s);
	return result;}

Dynamic BackEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseInOut_obj > result = new BackEaseInOut_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BackEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float BackEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BackEaseInOut","calculate",0xabe45e81,"motion.easing.BackEaseInOut.calculate","motion/easing/Back.hx",86,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(88)
	if ((((hx::DivEq(k,0.5)) < (int)1))){
		HX_STACK_LINE(88)
		return (0.5 * (((k * k) * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * k) - this->s)))));
	}
	HX_STACK_LINE(89)
	Float _g = ((hx::SubEq(k,(int)2)) * k);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	return (0.5 * (((_g * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * k) + this->s))) + (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseInOut_obj,calculate,return )

Float BackEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BackEaseInOut","ease",0x787d58b3,"motion.easing.BackEaseInOut.ease","motion/easing/Back.hx",94,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(96)
	if ((((hx::DivEq(t,(Float(d) / Float((int)2)))) < (int)1))){
		HX_STACK_LINE(96)
		return (((Float(c) / Float((int)2)) * (((t * t) * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * t) - this->s))))) + b);
	}
	HX_STACK_LINE(97)
	Float _g = ((hx::SubEq(t,(int)2)) * t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(97)
	return (((Float(c) / Float((int)2)) * (((_g * ((((((hx::MultEq(this->s,1.525)) + (int)1)) * t) + this->s))) + (int)2))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseInOut_obj,ease,return )


BackEaseInOut_obj::BackEaseInOut_obj()
{
}

Dynamic BackEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BackEaseInOut_obj,s),HX_CSTRING("s")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("s"),
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class BackEaseInOut_obj::__mClass;

void BackEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.BackEaseInOut"), hx::TCanCast< BackEaseInOut_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void BackEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
