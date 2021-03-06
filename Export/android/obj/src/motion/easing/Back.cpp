#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Back
#include <motion/easing/Back.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseIn
#include <motion/easing/BackEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseInOut
#include <motion/easing/BackEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseOut
#include <motion/easing/BackEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Back_obj::__construct()
{
	return null();
}

//Back_obj::~Back_obj() { }

Dynamic Back_obj::__CreateEmpty() { return  new Back_obj; }
hx::ObjectPtr< Back_obj > Back_obj::__new()
{  hx::ObjectPtr< Back_obj > result = new Back_obj();
	result->__construct();
	return result;}

Dynamic Back_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Back_obj > result = new Back_obj();
	result->__construct();
	return result;}

::motion::easing::IEasing Back_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Back","get_easeIn",0xb55c8378,"motion.easing.Back.get_easeIn","motion/easing/Back.hx",21,0x81c0c12c)
	HX_STACK_LINE(21)
	return ::motion::easing::BackEaseIn_obj::__new(1.70158);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeIn,return )

::motion::easing::IEasing Back_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Back","get_easeInOut",0xf2a54ff6,"motion.easing.Back.get_easeInOut","motion/easing/Back.hx",28,0x81c0c12c)
	HX_STACK_LINE(28)
	return ::motion::easing::BackEaseInOut_obj::__new(1.70158);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeInOut,return )

::motion::easing::IEasing Back_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Back","get_easeOut",0xfb9b199b,"motion.easing.Back.get_easeOut","motion/easing/Back.hx",35,0x81c0c12c)
	HX_STACK_LINE(35)
	return ::motion::easing::BackEaseOut_obj::__new(1.70158);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeOut,return )


Back_obj::Back_obj()
{
}

Dynamic Back_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { return get_easeIn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { return get_easeOut(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { return get_easeInOut(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { return get_easeIn_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { return get_easeOut_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { return get_easeInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Back_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Back_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get_easeIn"),
	HX_CSTRING("get_easeInOut"),
	HX_CSTRING("get_easeOut"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Back_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Back_obj::__mClass,"__mClass");
};

#endif

Class Back_obj::__mClass;

void Back_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.Back"), hx::TCanCast< Back_obj> ,sStaticFields,sMemberFields,
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

void Back_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
