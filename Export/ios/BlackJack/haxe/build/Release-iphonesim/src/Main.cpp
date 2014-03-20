#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",13,0x087e5c05)
{
	HX_STACK_LINE(15)
	super::__construct();
	HX_STACK_LINE(17)
	this->buildChips();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::buildChips( ){
{
		HX_STACK_FRAME("Main","buildChips",0x71b4790e,"Main.buildChips","Main.hx",21,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		int total = (int)100;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(23)
		::flash::display::BitmapData bitmapData = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("assets/chip.png"),null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(25)
			while(((_g < total))){
				HX_STACK_LINE(25)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				::flash::display::Bitmap chip = ::flash::display::Bitmap_obj::__new(bitmapData,null(),null());		HX_STACK_VAR(chip,"chip");
				HX_STACK_LINE(27)
				this->addChild(chip);
				HX_STACK_LINE(29)
				Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(29)
				chip->set_x((_g1 * this->get_stage()->get_stageWidth()));
				HX_STACK_LINE(30)
				chip->set_y((int)540);
				HX_STACK_LINE(32)
				this->continuosMovement(chip);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,buildChips,(void))

Void Main_obj::continuosMovement( ::flash::display::Bitmap element){
{
		HX_STACK_FRAME("Main","continuosMovement",0xd1aed0dc,"Main.continuosMovement","Main.hx",37,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(element,"element")
		HX_STACK_LINE(38)
		::flash::display::Bitmap item = element;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(39)
		int finalYPos = (int)0;		HX_STACK_VAR(finalYPos,"finalYPos");
		HX_STACK_LINE(41)
		if (((item->get_y() == (int)0))){
			HX_STACK_LINE(42)
			finalYPos = (int)540;
		}
		HX_STACK_LINE(45)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ::Main_obj *__this,Float &_g,int &finalYPos){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",45,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (_g * __this->get_stage()->get_stageWidth()),false);
					__result->Add(HX_CSTRING("y") , finalYPos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		::motion::Actuate_obj::tween(item,(int)1,_Function_1_1::Block(this,_g,finalYPos),null(),null())->delay((::Math_obj::random() * (int)2))->onComplete(this->continuosMovement_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(item)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,continuosMovement,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"buildChips") ) { return buildChips_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"continuosMovement") ) { return continuosMovement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buildChips"),
	HX_CSTRING("continuosMovement"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

