// Generated by Haxe 3.3.0
#ifndef INCLUDED_sys_net_Host
#define INCLUDED_sys_net_Host

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,net,Host)

namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES Host_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Host_obj OBJ_;
		Host_obj();

	public:
		void __construct(::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.net.Host")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.net.Host"); }
		static hx::ObjectPtr< Host_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Host_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("Host","\x88","\xfb","\xeb","\x2f"); }

		static void __boot();
		static ::String localhost();
		static ::Dynamic localhost_dyn();

		::String host;
		Int ip;
};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Host */ 
