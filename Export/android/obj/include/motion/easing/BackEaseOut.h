#ifndef INCLUDED_motion_easing_BackEaseOut
#define INCLUDED_motion_easing_BackEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/easing/IEasing.h>
HX_DECLARE_CLASS2(motion,easing,BackEaseOut)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  BackEaseOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BackEaseOut_obj OBJ_;
		BackEaseOut_obj();
		Void __construct(Float s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BackEaseOut_obj > __new(Float s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackEaseOut_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::motion::easing::IEasing_obj *()
			{ return new ::motion::easing::IEasing_delegate_< BackEaseOut_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BackEaseOut"); }

		Float s;
		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_BackEaseOut */ 
