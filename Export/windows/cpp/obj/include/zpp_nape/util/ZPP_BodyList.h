#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#define INCLUDED_zpp_nape_util_ZPP_BodyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,BodyList)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPList_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZNPNode_ZPP_Body)
HX_DECLARE_CLASS2(zpp_nape,util,ZPP_BodyList)
namespace zpp_nape{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ZPP_BodyList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_BodyList_obj OBJ_;
		ZPP_BodyList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ZPP_BodyList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ZPP_BodyList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_BodyList"); }

		::nape::phys::BodyList outer;
		::zpp_nape::util::ZNPList_ZPP_Body inner;
		bool immutable;
		bool _invalidated;
		Dynamic _invalidate;
		Dynamic &_invalidate_dyn() { return _invalidate;}
		Dynamic _validate;
		Dynamic &_validate_dyn() { return _validate;}
		Dynamic _modifiable;
		Dynamic &_modifiable_dyn() { return _modifiable;}
		Dynamic adder;
		Dynamic &adder_dyn() { return adder;}
		Dynamic post_adder;
		Dynamic &post_adder_dyn() { return post_adder;}
		Dynamic subber;
		Dynamic &subber_dyn() { return subber;}
		bool dontremove;
		bool reverse_flag;
		virtual Void valmod( );
		Dynamic valmod_dyn();

		virtual Void modified( );
		Dynamic modified_dyn();

		virtual Void modify_test( );
		Dynamic modify_test_dyn();

		virtual Void validate( );
		Dynamic validate_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		int at_index;
		::zpp_nape::util::ZNPNode_ZPP_Body at_ite;
		::zpp_nape::util::ZNPNode_ZPP_Body push_ite;
		bool zip_length;
		int user_length;
		static bool internal;
		static ::nape::phys::BodyList get( ::zpp_nape::util::ZNPList_ZPP_Body list,hx::Null< bool >  imm);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_ZPP_BodyList */ 
