#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Loader
#include <flash/display/Loader.h>
#endif
#ifndef INCLUDED_flash_display_LoaderInfo
#include <flash/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_net_URLLoader
#include <flash/net/URLLoader.h>
#endif

Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > result = new ApplicationMain_obj();
	result->__construct();
	return result;}

::flash::display::Sprite ApplicationMain_obj::barA;

::flash::display::Sprite ApplicationMain_obj::barB;

::flash::display::Sprite ApplicationMain_obj::container;

int ApplicationMain_obj::forceHeight;

int ApplicationMain_obj::forceWidth;

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",17,0x0780ded5)
		HX_STACK_LINE(19)
		::flash::Lib_obj::setPackage(HX_CSTRING("Gamesys"),HX_CSTRING("BlackJack"),HX_CSTRING("com.example.blackjack"),HX_CSTRING("1.0.0"));
		HX_STACK_LINE(110)
		int _g = ::flash::Lib_obj::ALLOW_SHADERS;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(113)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(114)
		int _g4 = ::flash::Lib_obj::RESIZABLE;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(115)
		int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(116)
		int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(117)
		int _g7 = (int)0;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(118)
		int _g8 = (int)0;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(119)
		int _g9 = (int)0;		HX_STACK_VAR(_g9,"_g9");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ApplicationMain.hx",32,0x0780ded5)
			{
				HX_STACK_LINE(34)
				::flash::Lib_obj::get_current()->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
				HX_STACK_LINE(35)
				::flash::Lib_obj::get_current()->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
				HX_STACK_LINE(36)
				::flash::display::MovieClip _g10 = ::flash::Lib_obj::get_current();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(36)
				_g10->loaderInfo = ::flash::display::LoaderInfo_obj::create(null());
				HX_STACK_LINE(76)
				bool hasMain = false;		HX_STACK_VAR(hasMain,"hasMain");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(78)
					Array< ::String > _g12 = ::Type_obj::getClassFields(hx::ClassOf< ::Main >());		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(78)
					while(((_g11 < _g12->length))){
						HX_STACK_LINE(78)
						::String methodName = _g12->__get(_g11);		HX_STACK_VAR(methodName,"methodName");
						HX_STACK_LINE(78)
						++(_g11);
						HX_STACK_LINE(80)
						if (((methodName == HX_CSTRING("main")))){
							HX_STACK_LINE(82)
							hasMain = true;
							HX_STACK_LINE(83)
							break;
						}
					}
				}
				HX_STACK_LINE(89)
				if ((hasMain)){
					HX_STACK_LINE(91)
					Dynamic _g11 = ::Reflect_obj::field(hx::ClassOf< ::Main >(),HX_CSTRING("main"));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(91)
					::Reflect_obj::callMethod(hx::ClassOf< ::Main >(),_g11,Dynamic( Array_obj<Dynamic>::__new()));
				}
				else{
					HX_STACK_LINE(95)
					::DocumentClass instance = ::Type_obj::createInstance(hx::ClassOf< ::DocumentClass >(),Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
					HX_STACK_LINE(97)
					if ((::Std_obj::is(instance,hx::ClassOf< ::flash::display::DisplayObject >()))){
						HX_STACK_LINE(99)
						::flash::Lib_obj::get_current()->addChild(instance);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(32)
		::flash::Lib_obj::create( Dynamic(new _Function_1_1()),(int)800,(int)600,(int)30,(int)16777215,(int((int((int((int((int((int((int((int((int((int(::flash::Lib_obj::HARDWARE) | int(_g))) | int(_g1))) | int(_g2))) | int(_g3))) | int(_g4))) | int(_g5))) | int(_g6))) | int(_g7))) | int(_g8))) | int(_g9)),HX_CSTRING("BlackJack"),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { return barA; }
		if (HX_FIELD_EQ(inName,"barB") ) { return barB; }
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { return container; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { return forceWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { return forceHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ApplicationMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"barA") ) { barA=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"barB") ) { barB=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"container") ) { container=inValue.Cast< ::flash::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceWidth") ) { forceWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"forceHeight") ) { forceHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ApplicationMain_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("barA"),
	HX_CSTRING("barB"),
	HX_CSTRING("container"),
	HX_CSTRING("forceHeight"),
	HX_CSTRING("forceWidth"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barA,"barA");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::barB,"barB");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::container,"container");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceHeight,"forceHeight");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::forceWidth,"forceWidth");
};

#endif

Class ApplicationMain_obj::__mClass;

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ApplicationMain"), hx::TCanCast< ApplicationMain_obj> ,sStaticFields,sMemberFields,
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

void ApplicationMain_obj::__boot()
{
}

