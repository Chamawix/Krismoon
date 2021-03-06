#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SpaceArbiterList
#include <zpp_nape/dynamics/ZPP_SpaceArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_SpaceArbiterList_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","new",0xed598891,"zpp_nape.dynamics.ZPP_SpaceArbiterList.new","zpp_nape/dynamics/SpaceArbiterList.hx",174,0x1150d7c4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(260)
	this->at_index_3 = (int)0;
	HX_STACK_LINE(259)
	this->at_index_2 = (int)0;
	HX_STACK_LINE(258)
	this->at_index_1 = (int)0;
	HX_STACK_LINE(257)
	this->at_index_0 = (int)0;
	HX_STACK_LINE(256)
	this->ite_3 = null();
	HX_STACK_LINE(255)
	this->ite_2 = null();
	HX_STACK_LINE(254)
	this->ite_1 = null();
	HX_STACK_LINE(253)
	this->ite_0 = null();
	HX_STACK_LINE(252)
	this->lengths = null();
	HX_STACK_LINE(177)
	this->zip_length = false;
	HX_STACK_LINE(176)
	this->_length = (int)0;
	HX_STACK_LINE(175)
	this->space = null();
	HX_STACK_LINE(179)
	super::__construct();
	HX_STACK_LINE(180)
	this->at_index_0 = (int)0;
	HX_STACK_LINE(181)
	this->at_index_1 = (int)0;
	HX_STACK_LINE(182)
	this->at_index_2 = (int)0;
	HX_STACK_LINE(183)
	this->at_index_3 = (int)0;
	HX_STACK_LINE(184)
	this->zip_length = true;
	HX_STACK_LINE(185)
	this->_length = (int)0;
	HX_STACK_LINE(186)
	Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(186)
	this->lengths = _g;
	HX_STACK_LINE(187)
	{
		HX_STACK_LINE(187)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		while((true)){
			HX_STACK_LINE(187)
			if ((!(((_g1 < (int)4))))){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(187)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(187)
			this->lengths->push((int)0);
		}
	}
}
;
	return null();
}

//ZPP_SpaceArbiterList_obj::~ZPP_SpaceArbiterList_obj() { }

Dynamic ZPP_SpaceArbiterList_obj::__CreateEmpty() { return  new ZPP_SpaceArbiterList_obj; }
hx::ObjectPtr< ZPP_SpaceArbiterList_obj > ZPP_SpaceArbiterList_obj::__new()
{  hx::ObjectPtr< ZPP_SpaceArbiterList_obj > result = new ZPP_SpaceArbiterList_obj();
	result->__construct();
	return result;}

Dynamic ZPP_SpaceArbiterList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_SpaceArbiterList_obj > result = new ZPP_SpaceArbiterList_obj();
	result->__construct();
	return result;}

int ZPP_SpaceArbiterList_obj::zpp_gl( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","zpp_gl",0x927c0ff9,"zpp_nape.dynamics.ZPP_SpaceArbiterList.zpp_gl","zpp_nape/dynamics/SpaceArbiterList.hx",189,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	this->zpp_vm();
	HX_STACK_LINE(191)
	if ((this->zip_length)){
		HX_STACK_LINE(192)
		this->_length = (int)0;
		HX_STACK_LINE(193)
		int ind = (int)0;		HX_STACK_VAR(ind,"ind");
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(195)
			{
				HX_STACK_LINE(196)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(197)
				{
					HX_STACK_LINE(198)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = this->space->c_arbiters_true->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(199)
					while((true)){
						HX_STACK_LINE(199)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(199)
							break;
						}
						HX_STACK_LINE(200)
						::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(201)
						if ((i->active)){
							HX_STACK_LINE(201)
							(len)++;
						}
						HX_STACK_LINE(202)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(205)
				int _g = (ind)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(205)
				this->lengths[_g] = len;
				HX_STACK_LINE(206)
				hx::AddEq(this->_length,len);
			}
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(209)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(210)
				{
					HX_STACK_LINE(211)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = this->space->c_arbiters_false->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(212)
					while((true)){
						HX_STACK_LINE(212)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(212)
							break;
						}
						HX_STACK_LINE(213)
						::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(214)
						if ((i->active)){
							HX_STACK_LINE(214)
							(len)++;
						}
						HX_STACK_LINE(215)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(218)
				int _g1 = (ind)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(218)
				this->lengths[_g1] = len;
				HX_STACK_LINE(219)
				hx::AddEq(this->_length,len);
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(222)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(223)
				{
					HX_STACK_LINE(224)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = this->space->f_arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(225)
					while((true)){
						HX_STACK_LINE(225)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(225)
							break;
						}
						HX_STACK_LINE(226)
						::zpp_nape::dynamics::ZPP_FluidArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(227)
						if ((i->active)){
							HX_STACK_LINE(227)
							(len)++;
						}
						HX_STACK_LINE(228)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(231)
				int _g2 = (ind)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(231)
				this->lengths[_g2] = len;
				HX_STACK_LINE(232)
				hx::AddEq(this->_length,len);
			}
			HX_STACK_LINE(234)
			{
				HX_STACK_LINE(235)
				int len = (int)0;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(236)
				{
					HX_STACK_LINE(237)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->space->s_arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(238)
					while((true)){
						HX_STACK_LINE(238)
						if ((!(((cx_ite != null()))))){
							HX_STACK_LINE(238)
							break;
						}
						HX_STACK_LINE(239)
						::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(240)
						if ((i->active)){
							HX_STACK_LINE(240)
							(len)++;
						}
						HX_STACK_LINE(241)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(244)
				int _g3 = (ind)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(244)
				this->lengths[_g3] = len;
				HX_STACK_LINE(245)
				hx::AddEq(this->_length,len);
			}
		}
		HX_STACK_LINE(248)
		this->zip_length = false;
	}
	HX_STACK_LINE(250)
	return this->_length;
}


Void ZPP_SpaceArbiterList_obj::zpp_vm( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","zpp_vm",0x927c1d0b,"zpp_nape.dynamics.ZPP_SpaceArbiterList.zpp_vm","zpp_nape/dynamics/SpaceArbiterList.hx",261,0x1150d7c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		bool modified = false;		HX_STACK_VAR(modified,"modified");
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(264)
			if ((this->space->c_arbiters_true->modified)){
				HX_STACK_LINE(265)
				modified = true;
				HX_STACK_LINE(266)
				this->space->c_arbiters_true->modified = false;
			}
			HX_STACK_LINE(268)
			if ((this->space->c_arbiters_false->modified)){
				HX_STACK_LINE(269)
				modified = true;
				HX_STACK_LINE(270)
				this->space->c_arbiters_false->modified = false;
			}
			HX_STACK_LINE(272)
			if ((this->space->f_arbiters->modified)){
				HX_STACK_LINE(273)
				modified = true;
				HX_STACK_LINE(274)
				this->space->f_arbiters->modified = false;
			}
			HX_STACK_LINE(276)
			if ((this->space->s_arbiters->modified)){
				HX_STACK_LINE(277)
				modified = true;
				HX_STACK_LINE(278)
				this->space->s_arbiters->modified = false;
			}
		}
		HX_STACK_LINE(281)
		if ((modified)){
			HX_STACK_LINE(282)
			this->zip_length = true;
			HX_STACK_LINE(283)
			this->_length = (int)0;
			HX_STACK_LINE(284)
			this->ite_0 = null();
			HX_STACK_LINE(285)
			this->ite_1 = null();
			HX_STACK_LINE(286)
			this->ite_2 = null();
			HX_STACK_LINE(287)
			this->ite_3 = null();
		}
	}
return null();
}


bool ZPP_SpaceArbiterList_obj::push( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","push",0xc25c8489,"zpp_nape.dynamics.ZPP_SpaceArbiterList.push","zpp_nape/dynamics/SpaceArbiterList.hx",290,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(292)
	HX_STACK_DO_THROW(HX_CSTRING("Error: ArbiterList is immutable"));
	HX_STACK_LINE(294)
	return false;
}


::nape::dynamics::Arbiter ZPP_SpaceArbiterList_obj::pop( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","pop",0xed5b15c2,"zpp_nape.dynamics.ZPP_SpaceArbiterList.pop","zpp_nape/dynamics/SpaceArbiterList.hx",296,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	HX_STACK_DO_THROW(HX_CSTRING("Error: ArbiterList is immutable"));
	HX_STACK_LINE(300)
	return null();
}


bool ZPP_SpaceArbiterList_obj::unshift( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","unshift",0xbd98083a,"zpp_nape.dynamics.ZPP_SpaceArbiterList.unshift","zpp_nape/dynamics/SpaceArbiterList.hx",302,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(304)
	HX_STACK_DO_THROW(HX_CSTRING("Error: ArbiterList is immutable"));
	HX_STACK_LINE(306)
	return false;
}


::nape::dynamics::Arbiter ZPP_SpaceArbiterList_obj::shift( ){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","shift",0x002bd2f3,"zpp_nape.dynamics.ZPP_SpaceArbiterList.shift","zpp_nape/dynamics/SpaceArbiterList.hx",308,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(310)
	HX_STACK_DO_THROW(HX_CSTRING("Error: ArbiterList is immutable"));
	HX_STACK_LINE(312)
	return null();
}


bool ZPP_SpaceArbiterList_obj::remove( ::nape::dynamics::Arbiter obj){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","remove",0x084958b3,"zpp_nape.dynamics.ZPP_SpaceArbiterList.remove","zpp_nape/dynamics/SpaceArbiterList.hx",314,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(316)
	HX_STACK_DO_THROW(HX_CSTRING("Error: ArbiterList is immutable"));
	HX_STACK_LINE(318)
	return false;
}


Void ZPP_SpaceArbiterList_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","clear",0xcc6457fe,"zpp_nape.dynamics.ZPP_SpaceArbiterList.clear","zpp_nape/dynamics/SpaceArbiterList.hx",322,0x1150d7c4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(322)
		HX_STACK_DO_THROW(HX_CSTRING("Error: ArbiterList is immutable"));
	}
return null();
}


::nape::dynamics::Arbiter ZPP_SpaceArbiterList_obj::at( int index){
	HX_STACK_FRAME("zpp_nape.dynamics.ZPP_SpaceArbiterList","at",0x01106de2,"zpp_nape.dynamics.ZPP_SpaceArbiterList.at","zpp_nape/dynamics/SpaceArbiterList.hx",325,0x1150d7c4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(326)
	this->zpp_vm();
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::zpp_nape::dynamics::ZPP_SpaceArbiterList_obj > __this,int &index){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","zpp_nape/dynamics/SpaceArbiterList.hx",328,0x1150d7c4)
			{
				HX_STACK_LINE(328)
				int _g = __this->zpp_gl();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(328)
				return (index >= _g);
			}
			return null();
		}
	};
	HX_STACK_LINE(328)
	if (((  ((!(((index < (int)0))))) ? bool(_Function_1_1::Block(this,index)) : bool(true) ))){
		HX_STACK_LINE(328)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(330)
	::nape::dynamics::Arbiter ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(331)
	int accum_length = (int)0;		HX_STACK_VAR(accum_length,"accum_length");
	HX_STACK_LINE(333)
	if (((ret == null()))){
		HX_STACK_LINE(334)
		if (((index < (accum_length + this->lengths->__get((int)0))))){
			HX_STACK_LINE(335)
			int offset = (index - accum_length);		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(336)
			if (((bool((offset < this->at_index_0)) || bool((this->ite_0 == null()))))){
				HX_STACK_LINE(337)
				this->at_index_0 = (int)0;
				HX_STACK_LINE(338)
				this->ite_0 = this->space->c_arbiters_true->head;
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(340)
					::zpp_nape::dynamics::ZPP_ColArbiter x = this->ite_0->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(341)
					if ((x->active)){
						HX_STACK_LINE(341)
						break;
					}
					HX_STACK_LINE(342)
					this->ite_0 = this->ite_0->next;
				}
			}
			HX_STACK_LINE(345)
			while((true)){
				HX_STACK_LINE(345)
				if ((!(((this->at_index_0 != offset))))){
					HX_STACK_LINE(345)
					break;
				}
				HX_STACK_LINE(346)
				(this->at_index_0)++;
				HX_STACK_LINE(347)
				this->ite_0 = this->ite_0->next;
				HX_STACK_LINE(348)
				while((true)){
					HX_STACK_LINE(349)
					::zpp_nape::dynamics::ZPP_ColArbiter x = this->ite_0->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(350)
					if ((x->active)){
						HX_STACK_LINE(350)
						break;
					}
					HX_STACK_LINE(351)
					this->ite_0 = this->ite_0->next;
				}
			}
			HX_STACK_LINE(354)
			::nape::dynamics::Arbiter _g1 = this->ite_0->elt->wrapper();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(354)
			ret = _g1;
		}
		else{
			HX_STACK_LINE(356)
			hx::AddEq(accum_length,this->lengths->__get((int)0));
		}
	}
	HX_STACK_LINE(358)
	if (((ret == null()))){
		HX_STACK_LINE(359)
		if (((index < (accum_length + this->lengths->__get((int)1))))){
			HX_STACK_LINE(360)
			int offset = (index - accum_length);		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(361)
			if (((bool((offset < this->at_index_1)) || bool((this->ite_1 == null()))))){
				HX_STACK_LINE(362)
				this->at_index_1 = (int)0;
				HX_STACK_LINE(363)
				this->ite_1 = this->space->c_arbiters_false->head;
				HX_STACK_LINE(364)
				while((true)){
					HX_STACK_LINE(365)
					::zpp_nape::dynamics::ZPP_ColArbiter x = this->ite_1->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(366)
					if ((x->active)){
						HX_STACK_LINE(366)
						break;
					}
					HX_STACK_LINE(367)
					this->ite_1 = this->ite_1->next;
				}
			}
			HX_STACK_LINE(370)
			while((true)){
				HX_STACK_LINE(370)
				if ((!(((this->at_index_1 != offset))))){
					HX_STACK_LINE(370)
					break;
				}
				HX_STACK_LINE(371)
				(this->at_index_1)++;
				HX_STACK_LINE(372)
				this->ite_1 = this->ite_1->next;
				HX_STACK_LINE(373)
				while((true)){
					HX_STACK_LINE(374)
					::zpp_nape::dynamics::ZPP_ColArbiter x = this->ite_1->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(375)
					if ((x->active)){
						HX_STACK_LINE(375)
						break;
					}
					HX_STACK_LINE(376)
					this->ite_1 = this->ite_1->next;
				}
			}
			HX_STACK_LINE(379)
			::nape::dynamics::Arbiter _g2 = this->ite_1->elt->wrapper();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(379)
			ret = _g2;
		}
		else{
			HX_STACK_LINE(381)
			hx::AddEq(accum_length,this->lengths->__get((int)1));
		}
	}
	HX_STACK_LINE(383)
	if (((ret == null()))){
		HX_STACK_LINE(384)
		if (((index < (accum_length + this->lengths->__get((int)2))))){
			HX_STACK_LINE(385)
			int offset = (index - accum_length);		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(386)
			if (((bool((offset < this->at_index_2)) || bool((this->ite_2 == null()))))){
				HX_STACK_LINE(387)
				this->at_index_2 = (int)0;
				HX_STACK_LINE(388)
				this->ite_2 = this->space->f_arbiters->head;
				HX_STACK_LINE(389)
				while((true)){
					HX_STACK_LINE(390)
					::zpp_nape::dynamics::ZPP_FluidArbiter x = this->ite_2->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(391)
					if ((x->active)){
						HX_STACK_LINE(391)
						break;
					}
					HX_STACK_LINE(392)
					this->ite_2 = this->ite_2->next;
				}
			}
			HX_STACK_LINE(395)
			while((true)){
				HX_STACK_LINE(395)
				if ((!(((this->at_index_2 != offset))))){
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(396)
				(this->at_index_2)++;
				HX_STACK_LINE(397)
				this->ite_2 = this->ite_2->next;
				HX_STACK_LINE(398)
				while((true)){
					HX_STACK_LINE(399)
					::zpp_nape::dynamics::ZPP_FluidArbiter x = this->ite_2->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(400)
					if ((x->active)){
						HX_STACK_LINE(400)
						break;
					}
					HX_STACK_LINE(401)
					this->ite_2 = this->ite_2->next;
				}
			}
			HX_STACK_LINE(404)
			::nape::dynamics::Arbiter _g3 = this->ite_2->elt->wrapper();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(404)
			ret = _g3;
		}
		else{
			HX_STACK_LINE(406)
			hx::AddEq(accum_length,this->lengths->__get((int)2));
		}
	}
	HX_STACK_LINE(408)
	if (((ret == null()))){
		HX_STACK_LINE(409)
		if (((index < (accum_length + this->lengths->__get((int)3))))){
			HX_STACK_LINE(410)
			int offset = (index - accum_length);		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(411)
			if (((bool((offset < this->at_index_3)) || bool((this->ite_3 == null()))))){
				HX_STACK_LINE(412)
				this->at_index_3 = (int)0;
				HX_STACK_LINE(413)
				this->ite_3 = this->space->s_arbiters->head;
				HX_STACK_LINE(414)
				while((true)){
					HX_STACK_LINE(415)
					::zpp_nape::dynamics::ZPP_SensorArbiter x = this->ite_3->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(416)
					if ((x->active)){
						HX_STACK_LINE(416)
						break;
					}
					HX_STACK_LINE(417)
					this->ite_3 = this->ite_3->next;
				}
			}
			HX_STACK_LINE(420)
			while((true)){
				HX_STACK_LINE(420)
				if ((!(((this->at_index_3 != offset))))){
					HX_STACK_LINE(420)
					break;
				}
				HX_STACK_LINE(421)
				(this->at_index_3)++;
				HX_STACK_LINE(422)
				this->ite_3 = this->ite_3->next;
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(424)
					::zpp_nape::dynamics::ZPP_SensorArbiter x = this->ite_3->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(425)
					if ((x->active)){
						HX_STACK_LINE(425)
						break;
					}
					HX_STACK_LINE(426)
					this->ite_3 = this->ite_3->next;
				}
			}
			HX_STACK_LINE(429)
			::nape::dynamics::Arbiter _g4 = this->ite_3->elt->wrapper();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(429)
			ret = _g4;
		}
		else{
			HX_STACK_LINE(431)
			hx::AddEq(accum_length,this->lengths->__get((int)3));
		}
	}
	HX_STACK_LINE(433)
	return ret;
}



ZPP_SpaceArbiterList_obj::ZPP_SpaceArbiterList_obj()
{
}

void ZPP_SpaceArbiterList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_SpaceArbiterList);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(lengths,"lengths");
	HX_MARK_MEMBER_NAME(ite_0,"ite_0");
	HX_MARK_MEMBER_NAME(ite_1,"ite_1");
	HX_MARK_MEMBER_NAME(ite_2,"ite_2");
	HX_MARK_MEMBER_NAME(ite_3,"ite_3");
	HX_MARK_MEMBER_NAME(at_index_0,"at_index_0");
	HX_MARK_MEMBER_NAME(at_index_1,"at_index_1");
	HX_MARK_MEMBER_NAME(at_index_2,"at_index_2");
	HX_MARK_MEMBER_NAME(at_index_3,"at_index_3");
	::nape::dynamics::ArbiterList_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_SpaceArbiterList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(lengths,"lengths");
	HX_VISIT_MEMBER_NAME(ite_0,"ite_0");
	HX_VISIT_MEMBER_NAME(ite_1,"ite_1");
	HX_VISIT_MEMBER_NAME(ite_2,"ite_2");
	HX_VISIT_MEMBER_NAME(ite_3,"ite_3");
	HX_VISIT_MEMBER_NAME(at_index_0,"at_index_0");
	HX_VISIT_MEMBER_NAME(at_index_1,"at_index_1");
	HX_VISIT_MEMBER_NAME(at_index_2,"at_index_2");
	HX_VISIT_MEMBER_NAME(at_index_3,"at_index_3");
	::nape::dynamics::ArbiterList_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_SpaceArbiterList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"ite_0") ) { return ite_0; }
		if (HX_FIELD_EQ(inName,"ite_1") ) { return ite_1; }
		if (HX_FIELD_EQ(inName,"ite_2") ) { return ite_2; }
		if (HX_FIELD_EQ(inName,"ite_3") ) { return ite_3; }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		if (HX_FIELD_EQ(inName,"lengths") ) { return lengths; }
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
		if (HX_FIELD_EQ(inName,"at_index_0") ) { return at_index_0; }
		if (HX_FIELD_EQ(inName,"at_index_1") ) { return at_index_1; }
		if (HX_FIELD_EQ(inName,"at_index_2") ) { return at_index_2; }
		if (HX_FIELD_EQ(inName,"at_index_3") ) { return at_index_3; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_SpaceArbiterList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_0") ) { ite_0=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_1") ) { ite_1=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_2") ) { ite_2=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ite_3") ) { ite_3=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lengths") ) { lengths=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_0") ) { at_index_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_1") ) { at_index_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_2") ) { at_index_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"at_index_3") ) { at_index_3=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_SpaceArbiterList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("_length"));
	outFields->push(HX_CSTRING("zip_length"));
	outFields->push(HX_CSTRING("lengths"));
	outFields->push(HX_CSTRING("ite_0"));
	outFields->push(HX_CSTRING("ite_1"));
	outFields->push(HX_CSTRING("ite_2"));
	outFields->push(HX_CSTRING("ite_3"));
	outFields->push(HX_CSTRING("at_index_0"));
	outFields->push(HX_CSTRING("at_index_1"));
	outFields->push(HX_CSTRING("at_index_2"));
	outFields->push(HX_CSTRING("at_index_3"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,space),HX_CSTRING("space")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,_length),HX_CSTRING("_length")},
	{hx::fsBool,(int)offsetof(ZPP_SpaceArbiterList_obj,zip_length),HX_CSTRING("zip_length")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,lengths),HX_CSTRING("lengths")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ColArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_0),HX_CSTRING("ite_0")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_ColArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_1),HX_CSTRING("ite_1")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_FluidArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_2),HX_CSTRING("ite_2")},
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_SensorArbiter*/ ,(int)offsetof(ZPP_SpaceArbiterList_obj,ite_3),HX_CSTRING("ite_3")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_0),HX_CSTRING("at_index_0")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_1),HX_CSTRING("at_index_1")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_2),HX_CSTRING("at_index_2")},
	{hx::fsInt,(int)offsetof(ZPP_SpaceArbiterList_obj,at_index_3),HX_CSTRING("at_index_3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("space"),
	HX_CSTRING("_length"),
	HX_CSTRING("zip_length"),
	HX_CSTRING("zpp_gl"),
	HX_CSTRING("lengths"),
	HX_CSTRING("ite_0"),
	HX_CSTRING("ite_1"),
	HX_CSTRING("ite_2"),
	HX_CSTRING("ite_3"),
	HX_CSTRING("at_index_0"),
	HX_CSTRING("at_index_1"),
	HX_CSTRING("at_index_2"),
	HX_CSTRING("at_index_3"),
	HX_CSTRING("zpp_vm"),
	HX_CSTRING("push"),
	HX_CSTRING("pop"),
	HX_CSTRING("unshift"),
	HX_CSTRING("shift"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("at"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_SpaceArbiterList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_SpaceArbiterList_obj::__mClass,"__mClass");
};

#endif

Class ZPP_SpaceArbiterList_obj::__mClass;

void ZPP_SpaceArbiterList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_SpaceArbiterList"), hx::TCanCast< ZPP_SpaceArbiterList_obj> ,sStaticFields,sMemberFields,
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

void ZPP_SpaceArbiterList_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace dynamics
