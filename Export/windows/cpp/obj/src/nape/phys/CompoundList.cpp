#include <hxcpp.h>

#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundIterator
#include <nape/phys/CompoundIterator.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
namespace nape{
namespace phys{

Void CompoundList_obj::__construct()
{
HX_STACK_FRAME("nape.phys.CompoundList","new",0xb7459911,"nape.phys.CompoundList.new","nape/phys/CompoundList.hx",234,0xaf0f831f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_CompoundList _g = ::zpp_nape::util::ZPP_CompoundList_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(696)
	this->zpp_inner = _g;
	HX_STACK_LINE(697)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//CompoundList_obj::~CompoundList_obj() { }

Dynamic CompoundList_obj::__CreateEmpty() { return  new CompoundList_obj; }
hx::ObjectPtr< CompoundList_obj > CompoundList_obj::__new()
{  hx::ObjectPtr< CompoundList_obj > result = new CompoundList_obj();
	result->__construct();
	return result;}

Dynamic CompoundList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompoundList_obj > result = new CompoundList_obj();
	result->__construct();
	return result;}

int CompoundList_obj::get_length( ){
	HX_STACK_FRAME("nape.phys.CompoundList","get_length",0xfdc7241e,"nape.phys.CompoundList.get_length","nape/phys/CompoundList.hx",244,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	this->zpp_inner->valmod();
	HX_STACK_LINE(246)
	if ((this->zpp_inner->zip_length)){
		HX_STACK_LINE(247)
		this->zpp_inner->zip_length = false;
		HX_STACK_LINE(259)
		this->zpp_inner->user_length = this->zpp_inner->inner->length;
	}
	HX_STACK_LINE(261)
	return this->zpp_inner->user_length;
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,get_length,return )

bool CompoundList_obj::has( ::nape::phys::Compound obj){
	HX_STACK_FRAME("nape.phys.CompoundList","has",0xb741080b,"nape.phys.CompoundList.has","nape/phys/CompoundList.hx",346,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	this->zpp_inner->valmod();
	HX_STACK_LINE(350)
	return this->zpp_inner->inner->has(obj->zpp_inner);
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,has,return )

::nape::phys::Compound CompoundList_obj::at( int index){
	HX_STACK_FRAME("nape.phys.CompoundList","at",0xb633ed62,"nape.phys.CompoundList.at","nape/phys/CompoundList.hx",363,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	this->zpp_inner->valmod();
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::phys::CompoundList_obj > __this,int &index){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",368,0xaf0f831f)
			{
				HX_STACK_LINE(368)
				int _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					__this->zpp_inner->valmod();
					HX_STACK_LINE(368)
					if ((__this->zpp_inner->zip_length)){
						HX_STACK_LINE(368)
						__this->zpp_inner->zip_length = false;
						HX_STACK_LINE(368)
						__this->zpp_inner->user_length = __this->zpp_inner->inner->length;
					}
					HX_STACK_LINE(368)
					_g = __this->zpp_inner->user_length;
				}
				HX_STACK_LINE(368)
				return (index >= _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(368)
	if (((  ((!(((index < (int)0))))) ? bool(_Function_1_1::Block(this,index)) : bool(true) ))){
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(370)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(370)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			this->zpp_inner->valmod();
			HX_STACK_LINE(370)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(370)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(370)
				this->zpp_inner->user_length = this->zpp_inner->inner->length;
			}
			HX_STACK_LINE(370)
			_g1 = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(370)
		int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(370)
		int _g3 = (_g2 - index);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(370)
		index = _g3;
	}
	HX_STACK_LINE(372)
	if (((bool((index < this->zpp_inner->at_index)) || bool((this->zpp_inner->at_ite == null()))))){
		HX_STACK_LINE(373)
		this->zpp_inner->at_index = index;
		HX_STACK_LINE(374)
		::zpp_nape::util::ZNPNode_ZPP_Compound _g4 = this->zpp_inner->inner->iterator_at(index);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(374)
		this->zpp_inner->at_ite = _g4;
	}
	else{
		HX_STACK_LINE(377)
		while((true)){
			HX_STACK_LINE(377)
			if ((!(((this->zpp_inner->at_index != index))))){
				HX_STACK_LINE(377)
				break;
			}
			HX_STACK_LINE(378)
			(this->zpp_inner->at_index)++;
			HX_STACK_LINE(379)
			this->zpp_inner->at_ite = this->zpp_inner->at_ite->next;
		}
	}
	HX_STACK_LINE(403)
	return this->zpp_inner->at_ite->elt->outer;
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,at,return )

bool CompoundList_obj::push( ::nape::phys::Compound obj){
	HX_STACK_FRAME("nape.phys.CompoundList","push",0xa6fee409,"nape.phys.CompoundList.push","nape/phys/CompoundList.hx",416,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(418)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(HX_CSTRING("Error: CompoundList is immutable"));
	}
	HX_STACK_LINE(420)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(421)
	this->zpp_inner->valmod();
	HX_STACK_LINE(424)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(424)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(424)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(424)
		cont = true;
	}
	HX_STACK_LINE(425)
	if ((cont)){
		HX_STACK_LINE(426)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(426)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(428)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(428)
				::zpp_nape::util::ZNPNode_ZPP_Compound _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(428)
				if (((this->zpp_inner->inner->head == null()))){
					HX_STACK_LINE(428)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(428)
					int _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						this->zpp_inner->valmod();
						HX_STACK_LINE(428)
						if ((this->zpp_inner->zip_length)){
							HX_STACK_LINE(428)
							this->zpp_inner->zip_length = false;
							HX_STACK_LINE(428)
							this->zpp_inner->user_length = this->zpp_inner->inner->length;
						}
						HX_STACK_LINE(428)
						_g1 = this->zpp_inner->user_length;
					}
					HX_STACK_LINE(428)
					int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(428)
					_g3 = this->zpp_inner->inner->iterator_at(_g2);
				}
				HX_STACK_LINE(428)
				this->zpp_inner->push_ite = _g3;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZNPNode_ZPP_Compound _g4 = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(429)
			this->zpp_inner->push_ite = _g4;
		}
		HX_STACK_LINE(431)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(432)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(432)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(434)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,push,return )

bool CompoundList_obj::unshift( ::nape::phys::Compound obj){
	HX_STACK_FRAME("nape.phys.CompoundList","unshift",0x0a1658ba,"nape.phys.CompoundList.unshift","nape/phys/CompoundList.hx",447,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(449)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(449)
		HX_STACK_DO_THROW(HX_CSTRING("Error: CompoundList is immutable"));
	}
	HX_STACK_LINE(451)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(452)
	this->zpp_inner->valmod();
	HX_STACK_LINE(455)
	bool cont;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(455)
	if (((this->zpp_inner->adder != null()))){
		HX_STACK_LINE(455)
		cont = this->zpp_inner->adder(obj);
	}
	else{
		HX_STACK_LINE(455)
		cont = true;
	}
	HX_STACK_LINE(456)
	if ((cont)){
		HX_STACK_LINE(457)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(458)
			if (((this->zpp_inner->push_ite == null()))){
				HX_STACK_LINE(458)
				::zpp_nape::util::ZNPNode_ZPP_Compound _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(458)
				if (((this->zpp_inner->inner->head == null()))){
					HX_STACK_LINE(458)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(458)
					int _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						this->zpp_inner->valmod();
						HX_STACK_LINE(458)
						if ((this->zpp_inner->zip_length)){
							HX_STACK_LINE(458)
							this->zpp_inner->zip_length = false;
							HX_STACK_LINE(458)
							this->zpp_inner->user_length = this->zpp_inner->inner->length;
						}
						HX_STACK_LINE(458)
						_g1 = this->zpp_inner->user_length;
					}
					HX_STACK_LINE(458)
					int _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(458)
					_g3 = this->zpp_inner->inner->iterator_at(_g2);
				}
				HX_STACK_LINE(458)
				this->zpp_inner->push_ite = _g3;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZNPNode_ZPP_Compound _g4 = this->zpp_inner->inner->insert(this->zpp_inner->push_ite,obj->zpp_inner);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(459)
			this->zpp_inner->push_ite = _g4;
		}
		else{
			HX_STACK_LINE(461)
			this->zpp_inner->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(462)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(463)
		if (((this->zpp_inner->post_adder != null()))){
			HX_STACK_LINE(463)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(465)
	return cont;
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,unshift,return )

::nape::phys::Compound CompoundList_obj::pop( ){
	HX_STACK_FRAME("nape.phys.CompoundList","pop",0xb7472642,"nape.phys.CompoundList.pop","nape/phys/CompoundList.hx",478,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(480)
		HX_STACK_DO_THROW(HX_CSTRING("Error: CompoundList is immutable"));
	}
	HX_STACK_LINE(482)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(484)
	if (((this->zpp_inner->inner->head == null()))){
		HX_STACK_LINE(484)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(486)
	this->zpp_inner->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::phys::ZPP_Compound ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(491)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(492)
		::nape::phys::Compound retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(493)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(494)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(494)
			this->zpp_inner->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(497)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(498)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			this->zpp_inner->valmod();
			HX_STACK_LINE(498)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(498)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(498)
				this->zpp_inner->user_length = this->zpp_inner->inner->length;
			}
			HX_STACK_LINE(498)
			_g1 = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(498)
		::zpp_nape::util::ZNPNode_ZPP_Compound ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(498)
		if (((_g1 == (int)1))){
			HX_STACK_LINE(498)
			ite = null();
		}
		else{
			HX_STACK_LINE(498)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				this->zpp_inner->valmod();
				HX_STACK_LINE(498)
				if ((this->zpp_inner->zip_length)){
					HX_STACK_LINE(498)
					this->zpp_inner->zip_length = false;
					HX_STACK_LINE(498)
					this->zpp_inner->user_length = this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(498)
				_g2 = this->zpp_inner->user_length;
			}
			HX_STACK_LINE(498)
			int _g3 = (_g2 - (int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(498)
			ite = this->zpp_inner->inner->iterator_at(_g3);
		}
		HX_STACK_LINE(499)
		if (((ite == null()))){
			HX_STACK_LINE(499)
			ret = this->zpp_inner->inner->head->elt;
		}
		else{
			HX_STACK_LINE(499)
			ret = ite->next->elt;
		}
		HX_STACK_LINE(500)
		::nape::phys::Compound retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(501)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(502)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(502)
			this->zpp_inner->inner->erase(ite);
		}
	}
	HX_STACK_LINE(504)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(505)
	::nape::phys::Compound retx = ret->outer;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,pop,return )

::nape::phys::Compound CompoundList_obj::shift( ){
	HX_STACK_FRAME("nape.phys.CompoundList","shift",0x299d0373,"nape.phys.CompoundList.shift","nape/phys/CompoundList.hx",519,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(521)
		HX_STACK_DO_THROW(HX_CSTRING("Error: CompoundList is immutable"));
	}
	HX_STACK_LINE(523)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(525)
	if (((this->zpp_inner->inner->head == null()))){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(527)
	this->zpp_inner->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::phys::ZPP_Compound ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(532)
		if (((bool((this->zpp_inner->at_ite != null())) && bool((this->zpp_inner->at_ite->next == null()))))){
			HX_STACK_LINE(532)
			this->zpp_inner->at_ite = null();
		}
		HX_STACK_LINE(533)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			this->zpp_inner->valmod();
			HX_STACK_LINE(533)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(533)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(533)
				this->zpp_inner->user_length = this->zpp_inner->inner->length;
			}
			HX_STACK_LINE(533)
			_g1 = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(533)
		::zpp_nape::util::ZNPNode_ZPP_Compound ite;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(533)
		if (((_g1 == (int)1))){
			HX_STACK_LINE(533)
			ite = null();
		}
		else{
			HX_STACK_LINE(533)
			int _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				this->zpp_inner->valmod();
				HX_STACK_LINE(533)
				if ((this->zpp_inner->zip_length)){
					HX_STACK_LINE(533)
					this->zpp_inner->zip_length = false;
					HX_STACK_LINE(533)
					this->zpp_inner->user_length = this->zpp_inner->inner->length;
				}
				HX_STACK_LINE(533)
				_g2 = this->zpp_inner->user_length;
			}
			HX_STACK_LINE(533)
			int _g3 = (_g2 - (int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(533)
			ite = this->zpp_inner->inner->iterator_at(_g3);
		}
		HX_STACK_LINE(534)
		if (((ite == null()))){
			HX_STACK_LINE(534)
			ret = this->zpp_inner->inner->head->elt;
		}
		else{
			HX_STACK_LINE(534)
			ret = ite->next->elt;
		}
		HX_STACK_LINE(535)
		::nape::phys::Compound retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(536)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(537)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(537)
			this->zpp_inner->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(540)
		ret = this->zpp_inner->inner->head->elt;
		HX_STACK_LINE(541)
		::nape::phys::Compound retx = ret->outer;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(542)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(543)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(543)
			this->zpp_inner->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	this->zpp_inner->invalidate();
	HX_STACK_LINE(546)
	::nape::phys::Compound retx = ret->outer;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	return retx;
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,shift,return )

bool CompoundList_obj::add( ::nape::phys::Compound obj){
	HX_STACK_FRAME("nape.phys.CompoundList","add",0xb73bbad2,"nape.phys.CompoundList.add","nape/phys/CompoundList.hx",564,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(564)
		return this->push(obj);
	}
	else{
		HX_STACK_LINE(564)
		return this->unshift(obj);
	}
	HX_STACK_LINE(564)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,add,return )

bool CompoundList_obj::remove( ::nape::phys::Compound obj){
	HX_STACK_FRAME("nape.phys.CompoundList","remove",0x21e29833,"nape.phys.CompoundList.remove","nape/phys/CompoundList.hx",576,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(578)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(578)
		HX_STACK_DO_THROW(HX_CSTRING("Error: CompoundList is immutable"));
	}
	HX_STACK_LINE(580)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(581)
	this->zpp_inner->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = this->zpp_inner->inner->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::phys::ZPP_Compound x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(592)
				if (((x == obj->zpp_inner))){
					HX_STACK_LINE(593)
					ret = true;
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	if ((ret)){
		HX_STACK_LINE(602)
		if (((this->zpp_inner->subber != null()))){
			HX_STACK_LINE(602)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(603)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(603)
			this->zpp_inner->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(604)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(606)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,remove,return )

Void CompoundList_obj::clear( ){
{
		HX_STACK_FRAME("nape.phys.CompoundList","clear",0xf5d5887e,"nape.phys.CompoundList.clear","nape/phys/CompoundList.hx",614,0xaf0f831f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(616)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CompoundList is immutable"));
		}
		HX_STACK_LINE(618)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				if ((!((!(((this->zpp_inner->inner->head == null()))))))){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				HX_STACK_LINE(622)
				if ((!((!(((this->zpp_inner->inner->head == null()))))))){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,clear,(void))

bool CompoundList_obj::empty( ){
	HX_STACK_FRAME("nape.phys.CompoundList","empty",0x1d54517e,"nape.phys.CompoundList.empty","nape/phys/CompoundList.hx",633,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	return (this->zpp_inner->inner->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,empty,return )

::nape::phys::CompoundIterator CompoundList_obj::iterator( ){
	HX_STACK_FRAME("nape.phys.CompoundList","iterator",0x385e5f9d,"nape.phys.CompoundList.iterator","nape/phys/CompoundList.hx",647,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	this->zpp_inner->valmod();
	HX_STACK_LINE(651)
	return ::nape::phys::CompoundIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,iterator,return )

::nape::phys::CompoundList CompoundList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.phys.CompoundList","copy",0x9e628de4,"nape.phys.CompoundList.copy","nape/phys/CompoundList.hx",662,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::phys::CompoundList ret = ::nape::phys::CompoundList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				this->zpp_inner->valmod();
				HX_STACK_LINE(664)
				_g = ::nape::phys::CompoundIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(664)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::CompoundIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",664,0xaf0f831f)
						{
							HX_STACK_LINE(664)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(664)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(664)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(664)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(664)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(664)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(664)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(664)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::CompoundIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",664,0xaf0f831f)
									{
										HX_STACK_LINE(664)
										{
											HX_STACK_LINE(664)
											_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
											HX_STACK_LINE(664)
											::nape::phys::CompoundIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(664)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(664)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(664)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(664)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::phys::Compound i;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(664)
					i = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(664)
				::nape::phys::Compound _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(664)
				if ((deep)){
					HX_STACK_LINE(666)
					HX_STACK_DO_THROW(HX_CSTRING("Error: Compound is not a copyable type"));
					HX_STACK_LINE(668)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(670)
					_g1 = i;
				}
				HX_STACK_LINE(664)
				ret->push(_g1);
			}
		}
		HX_STACK_LINE(671)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,copy,return )

Void CompoundList_obj::merge( ::nape::phys::CompoundList xs){
{
		HX_STACK_FRAME("nape.phys.CompoundList","merge",0xb340b9a9,"nape.phys.CompoundList.merge","nape/phys/CompoundList.hx",684,0xaf0f831f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(686)
		if (((xs == null()))){
			HX_STACK_LINE(686)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot merge with null list"));
		}
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				xs->zpp_inner->valmod();
				HX_STACK_LINE(688)
				_g = ::nape::phys::CompoundIterator_obj::get(xs);
			}
			HX_STACK_LINE(688)
			while((true)){
				struct _Function_3_1{
					inline static bool Block( ::nape::phys::CompoundIterator &_g){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",688,0xaf0f831f)
						{
							HX_STACK_LINE(688)
							_g->zpp_inner->zpp_inner->valmod();
							HX_STACK_LINE(688)
							int length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(688)
								_this->zpp_inner->valmod();
								HX_STACK_LINE(688)
								if ((_this->zpp_inner->zip_length)){
									HX_STACK_LINE(688)
									_this->zpp_inner->zip_length = false;
									HX_STACK_LINE(688)
									_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
								}
								HX_STACK_LINE(688)
								length = _this->zpp_inner->user_length;
							}
							HX_STACK_LINE(688)
							_g->zpp_critical = true;
							struct _Function_4_1{
								inline static bool Block( ::nape::phys::CompoundIterator &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",688,0xaf0f831f)
									{
										HX_STACK_LINE(688)
										{
											HX_STACK_LINE(688)
											_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
											HX_STACK_LINE(688)
											::nape::phys::CompoundIterator_obj::zpp_pool = _g;
											HX_STACK_LINE(688)
											_g->zpp_inner = null();
										}
										HX_STACK_LINE(688)
										return false;
									}
									return null();
								}
							};
							HX_STACK_LINE(688)
							return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(688)
				if ((!(_Function_3_1::Block(_g)))){
					HX_STACK_LINE(688)
					break;
				}
				HX_STACK_LINE(688)
				::nape::phys::Compound x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					_g->zpp_critical = false;
					HX_STACK_LINE(688)
					int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(688)
					x = _g->zpp_inner->at(_g1);
				}
				HX_STACK_LINE(689)
				if ((!(this->has(x)))){
					HX_STACK_LINE(689)
					if ((this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(689)
						this->push(x);
					}
					else{
						HX_STACK_LINE(689)
						this->unshift(x);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,merge,(void))

::String CompoundList_obj::toString( ){
	HX_STACK_FRAME("nape.phys.CompoundList","toString",0xdd32e65b,"nape.phys.CompoundList.toString","nape/phys/CompoundList.hx",702,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_CSTRING("[");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::phys::CompoundIterator _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			this->zpp_inner->valmod();
			HX_STACK_LINE(705)
			_g = ::nape::phys::CompoundIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(705)
		while((true)){
			struct _Function_3_1{
				inline static bool Block( ::nape::phys::CompoundIterator &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",705,0xaf0f831f)
					{
						HX_STACK_LINE(705)
						_g->zpp_inner->zpp_inner->valmod();
						HX_STACK_LINE(705)
						int length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(705)
						{
							HX_STACK_LINE(705)
							::nape::phys::CompoundList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(705)
							_this->zpp_inner->valmod();
							HX_STACK_LINE(705)
							if ((_this->zpp_inner->zip_length)){
								HX_STACK_LINE(705)
								_this->zpp_inner->zip_length = false;
								HX_STACK_LINE(705)
								_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
							}
							HX_STACK_LINE(705)
							length = _this->zpp_inner->user_length;
						}
						HX_STACK_LINE(705)
						_g->zpp_critical = true;
						struct _Function_4_1{
							inline static bool Block( ::nape::phys::CompoundIterator &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",705,0xaf0f831f)
								{
									HX_STACK_LINE(705)
									{
										HX_STACK_LINE(705)
										_g->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
										HX_STACK_LINE(705)
										::nape::phys::CompoundIterator_obj::zpp_pool = _g;
										HX_STACK_LINE(705)
										_g->zpp_inner = null();
									}
									HX_STACK_LINE(705)
									return false;
								}
								return null();
							}
						};
						HX_STACK_LINE(705)
						return (  (((_g->zpp_i < length))) ? bool(true) : bool(_Function_4_1::Block(_g)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(705)
			if ((!(_Function_3_1::Block(_g)))){
				HX_STACK_LINE(705)
				break;
			}
			HX_STACK_LINE(705)
			::nape::phys::Compound i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				_g->zpp_critical = false;
				HX_STACK_LINE(705)
				int _g1 = (_g->zpp_i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(705)
				i = _g->zpp_inner->at(_g1);
			}
			HX_STACK_LINE(706)
			if ((!(fst))){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_CSTRING(","));
			}
			HX_STACK_LINE(707)
			::String _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(707)
			if (((i == null()))){
				HX_STACK_LINE(707)
				_g1 = HX_CSTRING("NULL");
			}
			else{
				HX_STACK_LINE(707)
				_g1 = i->toString();
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,_g1);
			HX_STACK_LINE(708)
			fst = false;
		}
	}
	HX_STACK_LINE(710)
	return (ret + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(CompoundList_obj,toString,return )

::nape::phys::CompoundList CompoundList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.phys.CompoundList","foreach",0x6b4772bb,"nape.phys.CompoundList.foreach","nape/phys/CompoundList.hx",732,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(734)
	if (((lambda == null()))){
		HX_STACK_LINE(734)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot execute null on list elements"));
	}
	HX_STACK_LINE(736)
	::nape::phys::CompoundIterator it;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		this->zpp_inner->valmod();
		HX_STACK_LINE(736)
		it = ::nape::phys::CompoundIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(737)
	while((true)){
		struct _Function_2_1{
			inline static bool Block( ::nape::phys::CompoundIterator &it){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",737,0xaf0f831f)
				{
					HX_STACK_LINE(737)
					it->zpp_inner->zpp_inner->valmod();
					HX_STACK_LINE(737)
					int length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(737)
					{
						HX_STACK_LINE(737)
						::nape::phys::CompoundList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(737)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(737)
						if ((_this->zpp_inner->zip_length)){
							HX_STACK_LINE(737)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(737)
							_this->zpp_inner->user_length = _this->zpp_inner->inner->length;
						}
						HX_STACK_LINE(737)
						length = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(737)
					it->zpp_critical = true;
					struct _Function_3_1{
						inline static bool Block( ::nape::phys::CompoundIterator &it){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/phys/CompoundList.hx",737,0xaf0f831f)
							{
								HX_STACK_LINE(737)
								{
									HX_STACK_LINE(737)
									it->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
									HX_STACK_LINE(737)
									::nape::phys::CompoundIterator_obj::zpp_pool = it;
									HX_STACK_LINE(737)
									it->zpp_inner = null();
								}
								HX_STACK_LINE(737)
								return false;
							}
							return null();
						}
					};
					HX_STACK_LINE(737)
					return (  (((it->zpp_i < length))) ? bool(true) : bool(_Function_3_1::Block(it)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(737)
		if ((!(_Function_2_1::Block(it)))){
			HX_STACK_LINE(737)
			break;
		}
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(739)
			::nape::phys::Compound _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				it->zpp_critical = false;
				HX_STACK_LINE(739)
				int _g = (it->zpp_i)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(739)
				_g1 = it->zpp_inner->at(_g);
			}
			HX_STACK_LINE(739)
			lambda(_g1).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						it->zpp_next = ::nape::phys::CompoundIterator_obj::zpp_pool;
						HX_STACK_LINE(744)
						::nape::phys::CompoundIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,foreach,return )

::nape::phys::CompoundList CompoundList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.phys.CompoundList","filter",0xa28f1ba7,"nape.phys.CompoundList.filter","nape/phys/CompoundList.hx",779,0xaf0f831f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(781)
	if (((lambda == null()))){
		HX_STACK_LINE(781)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot select elements of list with null"));
	}
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(784)
	while((true)){
		HX_STACK_LINE(784)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			this->zpp_inner->valmod();
			HX_STACK_LINE(784)
			if ((this->zpp_inner->zip_length)){
				HX_STACK_LINE(784)
				this->zpp_inner->zip_length = false;
				HX_STACK_LINE(784)
				this->zpp_inner->user_length = this->zpp_inner->inner->length;
			}
			HX_STACK_LINE(784)
			_g = this->zpp_inner->user_length;
		}
		HX_STACK_LINE(784)
		if ((!(((i < _g))))){
			HX_STACK_LINE(784)
			break;
		}
		HX_STACK_LINE(785)
		::nape::phys::Compound x = this->at(i);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			if ((lambda(x).Cast< bool >())){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				this->remove(x);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,filter,return )

::nape::phys::CompoundList CompoundList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.phys.CompoundList","fromArray",0x60e73b40,"nape.phys.CompoundList.fromArray","nape/phys/CompoundList.hx",304,0xaf0f831f)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(306)
	if (((array == null()))){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot convert null Array to Nape list"));
	}
	HX_STACK_LINE(310)
	::nape::phys::CompoundList ret = ::nape::phys::CompoundList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			if ((!(((_g < array->length))))){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::phys::Compound i = array->__get(_g).StaticCast< ::nape::phys::Compound >();		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			ret->push(i);
		}
	}
	HX_STACK_LINE(318)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompoundList_obj,fromArray,return )


CompoundList_obj::CompoundList_obj()
{
}

void CompoundList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompoundList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void CompoundList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic CompoundList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompoundList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_CompoundList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompoundList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("zpp_inner"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_CompoundList*/ ,(int)offsetof(CompoundList_obj,zpp_inner),HX_CSTRING("zpp_inner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("zpp_inner"),
	HX_CSTRING("get_length"),
	HX_CSTRING("has"),
	HX_CSTRING("at"),
	HX_CSTRING("push"),
	HX_CSTRING("unshift"),
	HX_CSTRING("pop"),
	HX_CSTRING("shift"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("empty"),
	HX_CSTRING("iterator"),
	HX_CSTRING("copy"),
	HX_CSTRING("merge"),
	HX_CSTRING("toString"),
	HX_CSTRING("foreach"),
	HX_CSTRING("filter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompoundList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompoundList_obj::__mClass,"__mClass");
};

#endif

Class CompoundList_obj::__mClass;

void CompoundList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.CompoundList"), hx::TCanCast< CompoundList_obj> ,sStaticFields,sMemberFields,
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

void CompoundList_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
