#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#define INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_CbSetPair)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_CbSetPair)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZNPNode_ZPP_CbSetPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZNPNode_ZPP_CbSetPair_obj OBJ_;
		ZNPNode_ZPP_CbSetPair_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ZNPNode_ZPP_CbSetPair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZNPNode_ZPP_CbSetPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZNPNode_ZPP_CbSetPair"); }

		::zpp_nape::util::ZNPNode_ZPP_CbSetPair next;
		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::callbacks::ZPP_CbSetPair elt;
		virtual ::zpp_nape::callbacks::ZPP_CbSetPair elem( );
		Dynamic elem_dyn();

		static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair zpp_pool;
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair */ 
