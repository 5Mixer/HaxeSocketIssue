// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

hx::ObjectPtr< Input_obj > Input_obj::__new()
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}


Input_obj::Input_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Input_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
