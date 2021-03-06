#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_MixVec2List_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","new",0x430cbb5a,"zpp_nape.util.ZPP_MixVec2List.new","zpp_nape/util/Lists.hx",16277,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16282)
	this->at_index = (int)0;
	HX_STACK_LINE(16281)
	this->at_ite = null();
	HX_STACK_LINE(16280)
	this->zip_length = false;
	HX_STACK_LINE(16279)
	this->_length = (int)0;
	HX_STACK_LINE(16278)
	this->inner = null();
	HX_STACK_LINE(16290)
	super::__construct();
	HX_STACK_LINE(16291)
	this->at_ite = null();
	HX_STACK_LINE(16292)
	this->at_index = (int)0;
	HX_STACK_LINE(16293)
	this->zip_length = true;
	HX_STACK_LINE(16294)
	this->_length = (int)0;
}
;
	return null();
}

//ZPP_MixVec2List_obj::~ZPP_MixVec2List_obj() { }

Dynamic ZPP_MixVec2List_obj::__CreateEmpty() { return  new ZPP_MixVec2List_obj; }
hx::ObjectPtr< ZPP_MixVec2List_obj > ZPP_MixVec2List_obj::__new()
{  hx::ObjectPtr< ZPP_MixVec2List_obj > result = new ZPP_MixVec2List_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MixVec2List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MixVec2List_obj > result = new ZPP_MixVec2List_obj();
	result->__construct();
	return result;}

int ZPP_MixVec2List_obj::zpp_gl( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","zpp_gl",0x203000d0,"zpp_nape.util.ZPP_MixVec2List.zpp_gl","zpp_nape/util/Lists.hx",16296,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16297)
	this->zpp_vm();
	HX_STACK_LINE(16298)
	if ((this->zip_length)){
		HX_STACK_LINE(16299)
		this->_length = (int)0;
		HX_STACK_LINE(16300)
		{
			HX_STACK_LINE(16301)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(16302)
			while((true)){
				HX_STACK_LINE(16302)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(16302)
					break;
				}
				HX_STACK_LINE(16303)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(16304)
				(this->_length)++;
				HX_STACK_LINE(16305)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(16308)
		this->zip_length = false;
	}
	HX_STACK_LINE(16310)
	return this->_length;
}


Void ZPP_MixVec2List_obj::zpp_vm( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","zpp_vm",0x20300de2,"zpp_nape.util.ZPP_MixVec2List.zpp_vm","zpp_nape/util/Lists.hx",16312,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16313)
		this->zpp_inner->validate();
		HX_STACK_LINE(16314)
		if ((this->inner->modified)){
			HX_STACK_LINE(16315)
			this->zip_length = true;
			HX_STACK_LINE(16316)
			this->_length = (int)0;
			HX_STACK_LINE(16317)
			this->at_ite = null();
		}
	}
return null();
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::at( int index){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","at",0x85776739,"zpp_nape.util.ZPP_MixVec2List.at","zpp_nape/util/Lists.hx",16321,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(16322)
	this->zpp_vm();
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::zpp_nape::util::ZPP_MixVec2List_obj > __this,int &index){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/util/Lists.hx",16324,0x9f4e6754)
			{
				HX_STACK_LINE(16324)
				int _g = __this->zpp_gl();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(16324)
				return (index >= _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(16324)
	if (((  ((!(((index < (int)0))))) ? bool(_Function_1_1::Block(this,index)) : bool(true) ))){
		HX_STACK_LINE(16324)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(16326)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(16326)
		int _g1 = this->zpp_gl();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(16326)
		int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(16326)
		int _g3 = (_g2 - index);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(16326)
		index = _g3;
	}
	HX_STACK_LINE(16327)
	if (((bool((index < this->at_index)) || bool((this->at_ite == null()))))){
		HX_STACK_LINE(16328)
		this->at_index = (int)0;
		HX_STACK_LINE(16329)
		this->at_ite = this->inner->next;
		HX_STACK_LINE(16330)
		while((true)){
			HX_STACK_LINE(16331)
			::zpp_nape::geom::ZPP_Vec2 x = this->at_ite;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(16332)
			break;
			HX_STACK_LINE(16333)
			this->at_ite = this->at_ite->next;
		}
	}
	HX_STACK_LINE(16336)
	while((true)){
		HX_STACK_LINE(16336)
		if ((!(((this->at_index != index))))){
			HX_STACK_LINE(16336)
			break;
		}
		HX_STACK_LINE(16337)
		(this->at_index)++;
		HX_STACK_LINE(16338)
		this->at_ite = this->at_ite->next;
		HX_STACK_LINE(16339)
		while((true)){
			HX_STACK_LINE(16340)
			::zpp_nape::geom::ZPP_Vec2 x = this->at_ite;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(16341)
			break;
			HX_STACK_LINE(16342)
			this->at_ite = this->at_ite->next;
		}
	}
	HX_STACK_LINE(16345)
	::zpp_nape::geom::ZPP_Vec2 _this = this->at_ite;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(16345)
	if (((_this->outer == null()))){
		HX_STACK_LINE(16345)
		::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(16345)
		_this->outer = _g4;
		HX_STACK_LINE(16345)
		{
			HX_STACK_LINE(16345)
			::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(16345)
			{
				HX_STACK_LINE(16345)
				if (((o->outer != null()))){
					HX_STACK_LINE(16345)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(16345)
					o->outer = null();
				}
				HX_STACK_LINE(16345)
				o->_isimmutable = null();
				HX_STACK_LINE(16345)
				o->_validate = null();
				HX_STACK_LINE(16345)
				o->_invalidate = null();
			}
			HX_STACK_LINE(16345)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(16345)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(16345)
		_this->outer->zpp_inner = _this;
	}
	HX_STACK_LINE(16345)
	return _this->outer;
}


bool ZPP_MixVec2List_obj::push( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","push",0x6975c1a0,"zpp_nape.util.ZPP_MixVec2List.push","zpp_nape/util/Lists.hx",16348,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(16350)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16350)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List is immutable"));
	}
	HX_STACK_LINE(16352)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16353)
	this->zpp_vm();
	HX_STACK_LINE(16355)
	if ((obj->zpp_inner->_inuse)){
		HX_STACK_LINE(16355)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is already in use"));
	}
	HX_STACK_LINE(16357)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(16357)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(16357)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(16357)
		cont = true;
	}
	HX_STACK_LINE(16358)
	if ((cont)){
		HX_STACK_LINE(16359)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16359)
			this->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(16361)
			int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(16361)
			int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(16361)
			::zpp_nape::geom::ZPP_Vec2 ite = this->inner->iterator_at(_g1);		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(16362)
			this->inner->insert(ite,obj->zpp_inner);
		}
		HX_STACK_LINE(16364)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(16365)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(16365)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(16367)
	return cont;
}


bool ZPP_MixVec2List_obj::unshift( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","unshift",0x2d56d383,"zpp_nape.util.ZPP_MixVec2List.unshift","zpp_nape/util/Lists.hx",16370,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(16372)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16372)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List is immutable"));
	}
	HX_STACK_LINE(16374)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16375)
	this->zpp_vm();
	HX_STACK_LINE(16377)
	if ((obj->zpp_inner->_inuse)){
		HX_STACK_LINE(16377)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is already in use"));
	}
	HX_STACK_LINE(16379)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(16379)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(16379)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(16379)
		cont = true;
	}
	HX_STACK_LINE(16380)
	if ((cont)){
		HX_STACK_LINE(16381)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16382)
			int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(16382)
			int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(16382)
			::zpp_nape::geom::ZPP_Vec2 ite = this->inner->iterator_at(_g1);		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(16383)
			this->inner->insert(ite,obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(16385)
			this->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(16386)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(16387)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(16387)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(16389)
	return cont;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::pop( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","pop",0x430e488b,"zpp_nape.util.ZPP_MixVec2List.pop","zpp_nape/util/Lists.hx",16392,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16394)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16394)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List is immutable"));
	}
	HX_STACK_LINE(16396)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16398)
	if ((this->empty())){
		HX_STACK_LINE(16398)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(16400)
	this->zpp_vm();
	HX_STACK_LINE(16401)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16402)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(16403)
		ret = this->inner->next;
		HX_STACK_LINE(16404)
		::nape::geom::Vec2 retx;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16404)
		{
			HX_STACK_LINE(16404)
			if (((ret->outer == null()))){
				HX_STACK_LINE(16404)
				::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(16404)
				ret->outer = _g;
				HX_STACK_LINE(16404)
				{
					HX_STACK_LINE(16404)
					::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16404)
					{
						HX_STACK_LINE(16404)
						if (((o->outer != null()))){
							HX_STACK_LINE(16404)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16404)
							o->outer = null();
						}
						HX_STACK_LINE(16404)
						o->_isimmutable = null();
						HX_STACK_LINE(16404)
						o->_validate = null();
						HX_STACK_LINE(16404)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16404)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(16404)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16404)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16404)
			retx = ret->outer;
		}
		HX_STACK_LINE(16405)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(16405)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16406)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16406)
			this->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(16409)
		if (((bool((this->at_ite != null())) && bool((this->at_ite->next == null()))))){
			HX_STACK_LINE(16409)
			this->at_ite = null();
		}
		HX_STACK_LINE(16410)
		int _g1 = this->zpp_gl();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(16410)
		::zpp_nape::geom::ZPP_Vec2 ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(16410)
		if (((_g1 == (int)1))){
			HX_STACK_LINE(16410)
			ite = null();
		}
		else{
			HX_STACK_LINE(16410)
			int _g2 = this->zpp_gl();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(16410)
			int _g3 = (_g2 - (int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(16410)
			ite = this->inner->iterator_at(_g3);
		}
		HX_STACK_LINE(16411)
		if (((ite == null()))){
			HX_STACK_LINE(16411)
			ret = this->inner->next;
		}
		else{
			HX_STACK_LINE(16411)
			ret = ite->next;
		}
		HX_STACK_LINE(16412)
		::nape::geom::Vec2 retx;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16412)
		{
			HX_STACK_LINE(16412)
			if (((ret->outer == null()))){
				HX_STACK_LINE(16412)
				::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(16412)
				ret->outer = _g4;
				HX_STACK_LINE(16412)
				{
					HX_STACK_LINE(16412)
					::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16412)
					{
						HX_STACK_LINE(16412)
						if (((o->outer != null()))){
							HX_STACK_LINE(16412)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16412)
							o->outer = null();
						}
						HX_STACK_LINE(16412)
						o->_isimmutable = null();
						HX_STACK_LINE(16412)
						o->_validate = null();
						HX_STACK_LINE(16412)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16412)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(16412)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16412)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16412)
			retx = ret->outer;
		}
		HX_STACK_LINE(16413)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(16413)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16414)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16414)
			this->inner->erase(ite);
		}
	}
	HX_STACK_LINE(16416)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(16417)
	::nape::geom::Vec2 retx;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(16417)
	{
		HX_STACK_LINE(16417)
		if (((ret->outer == null()))){
			HX_STACK_LINE(16417)
			::nape::geom::Vec2 _g5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(16417)
			ret->outer = _g5;
			HX_STACK_LINE(16417)
			{
				HX_STACK_LINE(16417)
				::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(16417)
				{
					HX_STACK_LINE(16417)
					if (((o->outer != null()))){
						HX_STACK_LINE(16417)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(16417)
						o->outer = null();
					}
					HX_STACK_LINE(16417)
					o->_isimmutable = null();
					HX_STACK_LINE(16417)
					o->_validate = null();
					HX_STACK_LINE(16417)
					o->_invalidate = null();
				}
				HX_STACK_LINE(16417)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(16417)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(16417)
			ret->outer->zpp_inner = ret;
		}
		HX_STACK_LINE(16417)
		retx = ret->outer;
	}
	HX_STACK_LINE(16418)
	return retx;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::shift( ){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","shift",0x8f2809fc,"zpp_nape.util.ZPP_MixVec2List.shift","zpp_nape/util/Lists.hx",16421,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16423)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16423)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List is immutable"));
	}
	HX_STACK_LINE(16425)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16427)
	if ((this->empty())){
		HX_STACK_LINE(16427)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(16429)
	this->zpp_vm();
	HX_STACK_LINE(16430)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16431)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(16432)
		if (((bool((this->at_ite != null())) && bool((this->at_ite->next == null()))))){
			HX_STACK_LINE(16432)
			this->at_ite = null();
		}
		HX_STACK_LINE(16433)
		int _g = this->zpp_gl();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16433)
		::zpp_nape::geom::ZPP_Vec2 ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(16433)
		if (((_g == (int)1))){
			HX_STACK_LINE(16433)
			ite = null();
		}
		else{
			HX_STACK_LINE(16433)
			int _g1 = this->zpp_gl();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(16433)
			int _g2 = (_g1 - (int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(16433)
			ite = this->inner->iterator_at(_g2);
		}
		HX_STACK_LINE(16434)
		if (((ite == null()))){
			HX_STACK_LINE(16434)
			ret = this->inner->next;
		}
		else{
			HX_STACK_LINE(16434)
			ret = ite->next;
		}
		HX_STACK_LINE(16435)
		::nape::geom::Vec2 retx;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16435)
		{
			HX_STACK_LINE(16435)
			if (((ret->outer == null()))){
				HX_STACK_LINE(16435)
				::nape::geom::Vec2 _g3 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(16435)
				ret->outer = _g3;
				HX_STACK_LINE(16435)
				{
					HX_STACK_LINE(16435)
					::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16435)
					{
						HX_STACK_LINE(16435)
						if (((o->outer != null()))){
							HX_STACK_LINE(16435)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16435)
							o->outer = null();
						}
						HX_STACK_LINE(16435)
						o->_isimmutable = null();
						HX_STACK_LINE(16435)
						o->_validate = null();
						HX_STACK_LINE(16435)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16435)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(16435)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16435)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16435)
			retx = ret->outer;
		}
		HX_STACK_LINE(16436)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(16436)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16437)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16437)
			this->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(16440)
		ret = this->inner->next;
		HX_STACK_LINE(16441)
		::nape::geom::Vec2 retx;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(16441)
		{
			HX_STACK_LINE(16441)
			if (((ret->outer == null()))){
				HX_STACK_LINE(16441)
				::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(16441)
				ret->outer = _g4;
				HX_STACK_LINE(16441)
				{
					HX_STACK_LINE(16441)
					::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(16441)
					{
						HX_STACK_LINE(16441)
						if (((o->outer != null()))){
							HX_STACK_LINE(16441)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(16441)
							o->outer = null();
						}
						HX_STACK_LINE(16441)
						o->_isimmutable = null();
						HX_STACK_LINE(16441)
						o->_validate = null();
						HX_STACK_LINE(16441)
						o->_invalidate = null();
					}
					HX_STACK_LINE(16441)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(16441)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(16441)
				ret->outer->zpp_inner = ret;
			}
			HX_STACK_LINE(16441)
			retx = ret->outer;
		}
		HX_STACK_LINE(16442)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(16442)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(16443)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16443)
			this->inner->pop();
		}
	}
	HX_STACK_LINE(16445)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(16446)
	::nape::geom::Vec2 retx;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(16446)
	{
		HX_STACK_LINE(16446)
		if (((ret->outer == null()))){
			HX_STACK_LINE(16446)
			::nape::geom::Vec2 _g5 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(16446)
			ret->outer = _g5;
			HX_STACK_LINE(16446)
			{
				HX_STACK_LINE(16446)
				::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(16446)
				{
					HX_STACK_LINE(16446)
					if (((o->outer != null()))){
						HX_STACK_LINE(16446)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(16446)
						o->outer = null();
					}
					HX_STACK_LINE(16446)
					o->_isimmutable = null();
					HX_STACK_LINE(16446)
					o->_validate = null();
					HX_STACK_LINE(16446)
					o->_invalidate = null();
				}
				HX_STACK_LINE(16446)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(16446)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(16446)
			ret->outer->zpp_inner = ret;
		}
		HX_STACK_LINE(16446)
		retx = ret->outer;
	}
	HX_STACK_LINE(16447)
	return retx;
}


bool ZPP_MixVec2List_obj::remove( ::nape::geom::Vec2 obj){
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","remove",0x95fd498a,"zpp_nape.util.ZPP_MixVec2List.remove","zpp_nape/util/Lists.hx",16450,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(16452)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(16452)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List is immutable"));
	}
	HX_STACK_LINE(16454)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(16455)
	this->zpp_vm();
	HX_STACK_LINE(16456)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(16457)
	{
		HX_STACK_LINE(16458)
		ret = false;
		HX_STACK_LINE(16459)
		{
			HX_STACK_LINE(16460)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(16461)
			while((true)){
				HX_STACK_LINE(16461)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(16461)
					break;
				}
				HX_STACK_LINE(16462)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(16464)
				if (((obj->zpp_inner == x))){
					HX_STACK_LINE(16465)
					ret = true;
					HX_STACK_LINE(16466)
					break;
				}
				HX_STACK_LINE(16469)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(16473)
	if ((ret)){
		HX_STACK_LINE(16474)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(16474)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(16475)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(16475)
			this->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(16476)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(16478)
	return ret;
}


Void ZPP_MixVec2List_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","clear",0x5b608f07,"zpp_nape.util.ZPP_MixVec2List.clear","zpp_nape/util/Lists.hx",16481,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16483)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(16483)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2List is immutable"));
		}
		HX_STACK_LINE(16485)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(16486)
			while((true)){
				HX_STACK_LINE(16486)
				if ((!((!(this->empty()))))){
					HX_STACK_LINE(16486)
					break;
				}
				HX_STACK_LINE(16486)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(16489)
			while((true)){
				HX_STACK_LINE(16489)
				if ((!((!(this->empty()))))){
					HX_STACK_LINE(16489)
					break;
				}
				HX_STACK_LINE(16489)
				this->shift();
			}
		}
	}
return null();
}


::zpp_nape::util::ZPP_MixVec2List ZPP_MixVec2List_obj::get( ::zpp_nape::geom::ZPP_Vec2 list,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_FRAME("zpp_nape.util.ZPP_MixVec2List","get",0x43076b90,"zpp_nape.util.ZPP_MixVec2List.get","zpp_nape/util/Lists.hx",16283,0x9f4e6754)
	HX_STACK_ARG(list,"list")
	HX_STACK_ARG(immutable,"immutable")
{
		HX_STACK_LINE(16284)
		::zpp_nape::util::ZPP_MixVec2List ret = ::zpp_nape::util::ZPP_MixVec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(16285)
		ret->inner = list;
		HX_STACK_LINE(16286)
		ret->zpp_inner->immutable = immutable;
		HX_STACK_LINE(16287)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_MixVec2List_obj,get,return )


ZPP_MixVec2List_obj::ZPP_MixVec2List_obj()
{
}

void ZPP_MixVec2List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MixVec2List);
	HX_MARK_MEMBER_NAME(inner,"inner");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	::nape::geom::Vec2List_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_MixVec2List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inner,"inner");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	::nape::geom::Vec2List_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_MixVec2List_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MixVec2List_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MixVec2List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("_length"));
	outFields->push(HX_CSTRING("zip_length"));
	outFields->push(HX_CSTRING("at_ite"));
	outFields->push(HX_CSTRING("at_index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_MixVec2List_obj,inner),HX_CSTRING("inner")},
	{hx::fsInt,(int)offsetof(ZPP_MixVec2List_obj,_length),HX_CSTRING("_length")},
	{hx::fsBool,(int)offsetof(ZPP_MixVec2List_obj,zip_length),HX_CSTRING("zip_length")},
	{hx::fsObject /*::zpp_nape::geom::ZPP_Vec2*/ ,(int)offsetof(ZPP_MixVec2List_obj,at_ite),HX_CSTRING("at_ite")},
	{hx::fsInt,(int)offsetof(ZPP_MixVec2List_obj,at_index),HX_CSTRING("at_index")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inner"),
	HX_CSTRING("_length"),
	HX_CSTRING("zip_length"),
	HX_CSTRING("at_ite"),
	HX_CSTRING("at_index"),
	HX_CSTRING("zpp_gl"),
	HX_CSTRING("zpp_vm"),
	HX_CSTRING("at"),
	HX_CSTRING("push"),
	HX_CSTRING("unshift"),
	HX_CSTRING("pop"),
	HX_CSTRING("shift"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

#endif

Class ZPP_MixVec2List_obj::__mClass;

void ZPP_MixVec2List_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_MixVec2List"), hx::TCanCast< ZPP_MixVec2List_obj> ,sStaticFields,sMemberFields,
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

void ZPP_MixVec2List_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
