#include <hxcpp.h>

#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_CompoundList
#include <nape/phys/CompoundList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_CopyHelper
#include <zpp_nape/constraint/ZPP_CopyHelper.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CompoundList
#include <zpp_nape/util/ZPP_CompoundList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Compound_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","new",0x474c9a3d,"zpp_nape.phys.ZPP_Compound.new","zpp_nape/phys/Compound.hx",174,0x2d1c4718)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(184)
	this->space = null();
	HX_STACK_LINE(183)
	this->compound = null();
	HX_STACK_LINE(182)
	this->depth = (int)0;
	HX_STACK_LINE(181)
	this->wrap_compounds = null();
	HX_STACK_LINE(180)
	this->wrap_constraints = null();
	HX_STACK_LINE(179)
	this->wrap_bodies = null();
	HX_STACK_LINE(178)
	this->compounds = null();
	HX_STACK_LINE(177)
	this->constraints = null();
	HX_STACK_LINE(176)
	this->bodies = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(310)
	super::__construct();
	HX_STACK_LINE(311)
	this->icompound = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(312)
	this->depth = (int)1;
	HX_STACK_LINE(313)
	::zpp_nape::phys::ZPP_Compound me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(314)
	::zpp_nape::util::ZNPList_ZPP_Body _g = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(314)
	this->bodies = _g;
	HX_STACK_LINE(315)
	::nape::phys::BodyList _g1 = ::zpp_nape::util::ZPP_BodyList_obj::get(this->bodies,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(315)
	this->wrap_bodies = _g1;
	HX_STACK_LINE(316)
	this->wrap_bodies->zpp_inner->adder = this->bodies_adder_dyn();
	HX_STACK_LINE(317)
	this->wrap_bodies->zpp_inner->subber = this->bodies_subber_dyn();
	HX_STACK_LINE(319)
	this->wrap_bodies->zpp_inner->_modifiable = this->bodies_modifiable_dyn();
	HX_STACK_LINE(321)
	::zpp_nape::util::ZNPList_ZPP_Constraint _g2 = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(321)
	this->constraints = _g2;
	HX_STACK_LINE(322)
	::nape::constraint::ConstraintList _g3 = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->constraints,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(322)
	this->wrap_constraints = _g3;
	HX_STACK_LINE(323)
	this->wrap_constraints->zpp_inner->adder = this->constraints_adder_dyn();
	HX_STACK_LINE(324)
	this->wrap_constraints->zpp_inner->subber = this->constraints_subber_dyn();
	HX_STACK_LINE(326)
	this->wrap_constraints->zpp_inner->_modifiable = this->constraints_modifiable_dyn();
	HX_STACK_LINE(328)
	::zpp_nape::util::ZNPList_ZPP_Compound _g4 = ::zpp_nape::util::ZNPList_ZPP_Compound_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(328)
	this->compounds = _g4;
	HX_STACK_LINE(329)
	::nape::phys::CompoundList _g5 = ::zpp_nape::util::ZPP_CompoundList_obj::get(this->compounds,null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(329)
	this->wrap_compounds = _g5;
	HX_STACK_LINE(330)
	this->wrap_compounds->zpp_inner->adder = this->compounds_adder_dyn();
	HX_STACK_LINE(331)
	this->wrap_compounds->zpp_inner->subber = this->compounds_subber_dyn();
	HX_STACK_LINE(333)
	this->wrap_compounds->zpp_inner->_modifiable = this->compounds_modifiable_dyn();
}
;
	return null();
}

//ZPP_Compound_obj::~ZPP_Compound_obj() { }

Dynamic ZPP_Compound_obj::__CreateEmpty() { return  new ZPP_Compound_obj; }
hx::ObjectPtr< ZPP_Compound_obj > ZPP_Compound_obj::__new()
{  hx::ObjectPtr< ZPP_Compound_obj > result = new ZPP_Compound_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Compound_obj > result = new ZPP_Compound_obj();
	result->__construct();
	return result;}

Void ZPP_Compound_obj::__imutable_midstep( ::String name){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","__imutable_midstep",0x98629395,"zpp_nape.phys.ZPP_Compound.__imutable_midstep","zpp_nape/phys/Compound.hx",187,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(187)
		if (((bool((this->space != null())) && bool(this->space->midstep)))){
			HX_STACK_LINE(187)
			HX_STACK_DO_THROW(((HX_CSTRING("Error: ") + name) + HX_CSTRING(" cannot be set during space step()")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,__imutable_midstep,(void))

Void ZPP_Compound_obj::addedToSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","addedToSpace",0x9c1fd6ee,"zpp_nape.phys.ZPP_Compound.addedToSpace","zpp_nape/phys/Compound.hx",191,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		this->__iaddedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,addedToSpace,(void))

Void ZPP_Compound_obj::removedFromSpace( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","removedFromSpace",0x9befd33f,"zpp_nape.phys.ZPP_Compound.removedFromSpace","zpp_nape/phys/Compound.hx",194,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		this->__iremovedFromSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,removedFromSpace,(void))

Void ZPP_Compound_obj::breakApart( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","breakApart",0x6247bb58,"zpp_nape.phys.ZPP_Compound.breakApart","zpp_nape/phys/Compound.hx",196,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		if (((this->space != null()))){
			HX_STACK_LINE(198)
			this->__iremovedFromSpace();
			HX_STACK_LINE(199)
			this->space->nullInteractorType(hx::ObjectPtr<OBJ_>(this),null());
		}
		HX_STACK_LINE(201)
		if (((this->compound != null()))){
			HX_STACK_LINE(201)
			this->compound->compounds->remove(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(202)
			if (((this->space != null()))){
				HX_STACK_LINE(202)
				this->space->compounds->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			if ((!((!(((this->bodies->head == null()))))))){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(205)
			::zpp_nape::phys::ZPP_Body b = this->bodies->pop_unsafe();		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(207)
				::zpp_nape::phys::ZPP_Compound _g = b->compound = this->compound;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(207)
				if (((_g != null()))){
					HX_STACK_LINE(207)
					this->compound->bodies->add(b);
				}
				else{
					HX_STACK_LINE(208)
					if (((this->space != null()))){
						HX_STACK_LINE(208)
						this->space->bodies->add(b);
					}
				}
				HX_STACK_LINE(209)
				if (((this->space != null()))){
					HX_STACK_LINE(209)
					this->space->freshInteractorType(b,null());
				}
			}
		}
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			if ((!((!(((this->constraints->head == null()))))))){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(215)
			::zpp_nape::constraint::ZPP_Constraint c = this->constraints->pop_unsafe();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(217)
				::zpp_nape::phys::ZPP_Compound _g1 = c->compound = this->compound;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(217)
				if (((_g1 != null()))){
					HX_STACK_LINE(217)
					this->compound->constraints->add(c);
				}
				else{
					HX_STACK_LINE(218)
					if (((this->space != null()))){
						HX_STACK_LINE(218)
						this->space->constraints->add(c);
					}
				}
			}
		}
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			if ((!((!(((this->compounds->head == null()))))))){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(224)
			::zpp_nape::phys::ZPP_Compound c = this->compounds->pop_unsafe();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(225)
			{
				HX_STACK_LINE(226)
				::zpp_nape::phys::ZPP_Compound _g2 = c->compound = this->compound;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(226)
				if (((_g2 != null()))){
					HX_STACK_LINE(226)
					this->compound->compounds->add(c);
				}
				else{
					HX_STACK_LINE(227)
					if (((this->space != null()))){
						HX_STACK_LINE(227)
						this->space->compounds->add(c);
					}
				}
				HX_STACK_LINE(228)
				if (((this->space != null()))){
					HX_STACK_LINE(228)
					this->space->freshInteractorType(c,null());
				}
			}
		}
		HX_STACK_LINE(232)
		this->compound = null();
		HX_STACK_LINE(233)
		this->space = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,breakApart,(void))

bool ZPP_Compound_obj::bodies_adder( ::nape::phys::Body x){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","bodies_adder",0x97796a12,"zpp_nape.phys.ZPP_Compound.bodies_adder","zpp_nape/phys/Compound.hx",238,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(238)
	if (((x->zpp_inner->compound != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(239)
		if (((x->zpp_inner->compound != null()))){
			HX_STACK_LINE(239)
			x->zpp_inner->compound->wrap_bodies->remove(x);
		}
		else{
			HX_STACK_LINE(240)
			if (((x->zpp_inner->space != null()))){
				HX_STACK_LINE(240)
				x->zpp_inner->space->wrap_bodies->remove(x);
			}
		}
		HX_STACK_LINE(241)
		x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(243)
		if (((this->space != null()))){
			HX_STACK_LINE(243)
			this->space->addBody(x->zpp_inner,null());
		}
		HX_STACK_LINE(244)
		return true;
	}
	else{
		HX_STACK_LINE(246)
		return false;
	}
	HX_STACK_LINE(238)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,bodies_adder,return )

Void ZPP_Compound_obj::bodies_subber( ::nape::phys::Body x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","bodies_subber",0xedab020b,"zpp_nape.phys.ZPP_Compound.bodies_subber","zpp_nape/phys/Compound.hx",248,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(249)
		x->zpp_inner->compound = null();
		HX_STACK_LINE(251)
		if (((this->space != null()))){
			HX_STACK_LINE(251)
			this->space->remBody(x->zpp_inner,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,bodies_subber,(void))

Void ZPP_Compound_obj::bodies_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","bodies_modifiable",0x5bf8d340,"zpp_nape.phys.ZPP_Compound.bodies_modifiable","zpp_nape/phys/Compound.hx",255,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(255)
		this->immutable_midstep(HX_CSTRING("Compound::bodies"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,bodies_modifiable,(void))

bool ZPP_Compound_obj::constraints_adder( ::nape::constraint::Constraint x){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","constraints_adder",0x1af65ca2,"zpp_nape.phys.ZPP_Compound.constraints_adder","zpp_nape/phys/Compound.hx",260,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(260)
	if (((x->zpp_inner->compound != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(261)
		if (((x->zpp_inner->compound != null()))){
			HX_STACK_LINE(261)
			x->zpp_inner->compound->wrap_constraints->remove(x);
		}
		else{
			HX_STACK_LINE(262)
			if (((x->zpp_inner->space != null()))){
				HX_STACK_LINE(262)
				x->zpp_inner->space->wrap_constraints->remove(x);
			}
		}
		HX_STACK_LINE(263)
		x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(265)
		if (((this->space != null()))){
			HX_STACK_LINE(265)
			this->space->addConstraint(x->zpp_inner);
		}
		HX_STACK_LINE(266)
		return true;
	}
	else{
		HX_STACK_LINE(268)
		return false;
	}
	HX_STACK_LINE(260)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,constraints_adder,return )

Void ZPP_Compound_obj::constraints_subber( ::nape::constraint::Constraint x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","constraints_subber",0x77824d7b,"zpp_nape.phys.ZPP_Compound.constraints_subber","zpp_nape/phys/Compound.hx",270,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(271)
		x->zpp_inner->compound = null();
		HX_STACK_LINE(273)
		if (((this->space != null()))){
			HX_STACK_LINE(273)
			this->space->remConstraint(x->zpp_inner);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,constraints_subber,(void))

Void ZPP_Compound_obj::constraints_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","constraints_modifiable",0xa7b296b0,"zpp_nape.phys.ZPP_Compound.constraints_modifiable","zpp_nape/phys/Compound.hx",277,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		this->immutable_midstep(HX_CSTRING("Compound::constraints"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,constraints_modifiable,(void))

bool ZPP_Compound_obj::compounds_adder( ::nape::phys::Compound x){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","compounds_adder",0x36126614,"zpp_nape.phys.ZPP_Compound.compounds_adder","zpp_nape/phys/Compound.hx",280,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(282)
	::zpp_nape::phys::ZPP_Compound cur = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(283)
	while((true)){
		HX_STACK_LINE(283)
		if ((!(((bool((cur != null())) && bool((cur != x->zpp_inner))))))){
			HX_STACK_LINE(283)
			break;
		}
		HX_STACK_LINE(283)
		cur = cur->compound;
	}
	HX_STACK_LINE(284)
	if (((cur == x->zpp_inner))){
		HX_STACK_LINE(285)
		::String _g = x->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		::String _g1 = (HX_CSTRING("Error: Assignment would cause a cycle in the Compound tree: assigning ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(285)
		::String _g2 = (_g1 + HX_CSTRING(".compound = "));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(285)
		::String _g3 = this->outer->toString();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(285)
		HX_STACK_DO_THROW((_g2 + _g3));
		HX_STACK_LINE(286)
		return false;
	}
	HX_STACK_LINE(289)
	if (((x->zpp_inner->compound != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(290)
		if (((x->zpp_inner->compound != null()))){
			HX_STACK_LINE(290)
			x->zpp_inner->compound->wrap_compounds->remove(x);
		}
		else{
			HX_STACK_LINE(291)
			if (((x->zpp_inner->space != null()))){
				HX_STACK_LINE(291)
				x->zpp_inner->space->wrap_compounds->remove(x);
			}
		}
		HX_STACK_LINE(292)
		x->zpp_inner->compound = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(293)
		x->zpp_inner->depth = (this->depth + (int)1);
		HX_STACK_LINE(294)
		if (((this->space != null()))){
			HX_STACK_LINE(294)
			this->space->addCompound(x->zpp_inner);
		}
		HX_STACK_LINE(295)
		return true;
	}
	else{
		HX_STACK_LINE(297)
		return false;
	}
	HX_STACK_LINE(289)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,compounds_adder,return )

Void ZPP_Compound_obj::compounds_subber( ::nape::phys::Compound x){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","compounds_subber",0x14ee87c9,"zpp_nape.phys.ZPP_Compound.compounds_subber","zpp_nape/phys/Compound.hx",299,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(300)
		x->zpp_inner->compound = null();
		HX_STACK_LINE(301)
		x->zpp_inner->depth = (int)1;
		HX_STACK_LINE(302)
		if (((this->space != null()))){
			HX_STACK_LINE(302)
			this->space->remCompound(x->zpp_inner);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Compound_obj,compounds_subber,(void))

Void ZPP_Compound_obj::compounds_modifiable( ){
{
		HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","compounds_modifiable",0x92050ffe,"zpp_nape.phys.ZPP_Compound.compounds_modifiable","zpp_nape/phys/Compound.hx",306,0x2d1c4718)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		this->immutable_midstep(HX_CSTRING("Compound::compounds"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Compound_obj,compounds_modifiable,(void))

::nape::phys::Compound ZPP_Compound_obj::copy( Array< ::Dynamic > dict,Array< ::Dynamic > todo){
	HX_STACK_FRAME("zpp_nape.phys.ZPP_Compound","copy",0x147c9338,"zpp_nape.phys.ZPP_Compound.copy","zpp_nape/phys/Compound.hx",336,0x2d1c4718)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dict,"dict")
	HX_STACK_ARG(todo,"todo")
	HX_STACK_LINE(337)
	bool root = (dict == null());		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(338)
	if (((dict == null()))){
		HX_STACK_LINE(338)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		dict = _g;
	}
	HX_STACK_LINE(339)
	if (((todo == null()))){
		HX_STACK_LINE(339)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(339)
		todo = _g1;
	}
	HX_STACK_LINE(340)
	::nape::phys::Compound ret = ::nape::phys::Compound_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(341)
	{
		HX_STACK_LINE(342)
		::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = this->compounds->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(344)
			::zpp_nape::phys::ZPP_Compound c = cx_ite->elt;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(345)
			{
				HX_STACK_LINE(346)
				::nape::phys::Compound cc = c->copy(dict,todo);		HX_STACK_VAR(cc,"cc");
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					{
						HX_STACK_LINE(347)
						cc->zpp_inner->immutable_midstep(HX_CSTRING("Compound::compound"));
						HX_STACK_LINE(347)
						if (((((  (((cc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(cc->zpp_inner->compound->outer) )) != ret))){
							HX_STACK_LINE(347)
							if (((((  (((cc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(cc->zpp_inner->compound->outer) )) != null()))){
								HX_STACK_LINE(347)
								((  (((cc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(cc->zpp_inner->compound->outer) ))->zpp_inner->wrap_compounds->remove(cc);
							}
							HX_STACK_LINE(347)
							if (((ret != null()))){
								HX_STACK_LINE(347)
								::nape::phys::CompoundList _this = ret->zpp_inner->wrap_compounds;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(347)
								if ((_this->zpp_inner->reverse_flag)){
									HX_STACK_LINE(347)
									_this->push(cc);
								}
								else{
									HX_STACK_LINE(347)
									_this->unshift(cc);
								}
							}
						}
					}
					HX_STACK_LINE(347)
					if (((cc->zpp_inner->compound == null()))){
						HX_STACK_LINE(347)
						Dynamic();
					}
					else{
						HX_STACK_LINE(347)
						cc->zpp_inner->compound->outer;
					}
				}
			}
			HX_STACK_LINE(349)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(352)
	{
		HX_STACK_LINE(353)
		::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = this->bodies->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(354)
		while((true)){
			HX_STACK_LINE(354)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(354)
				break;
			}
			HX_STACK_LINE(355)
			::zpp_nape::phys::ZPP_Body b = cx_ite->elt;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(357)
				::nape::phys::Body bc = b->outer->copy();		HX_STACK_VAR(bc,"bc");
				HX_STACK_LINE(358)
				::zpp_nape::constraint::ZPP_CopyHelper _g2 = ::zpp_nape::constraint::ZPP_CopyHelper_obj::dict(b->id,bc);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(358)
				dict->push(_g2);
				HX_STACK_LINE(359)
				{
					HX_STACK_LINE(359)
					if (((((  (((bc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(bc->zpp_inner->compound->outer) )) != ret))){
						HX_STACK_LINE(359)
						if (((((  (((bc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(bc->zpp_inner->compound->outer) )) != null()))){
							HX_STACK_LINE(359)
							((  (((bc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(bc->zpp_inner->compound->outer) ))->zpp_inner->wrap_bodies->remove(bc);
						}
						HX_STACK_LINE(359)
						if (((ret != null()))){
							HX_STACK_LINE(359)
							::nape::phys::BodyList _this = ret->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							if ((_this->zpp_inner->reverse_flag)){
								HX_STACK_LINE(359)
								_this->push(bc);
							}
							else{
								HX_STACK_LINE(359)
								_this->unshift(bc);
							}
						}
					}
					HX_STACK_LINE(359)
					if (((bc->zpp_inner->compound == null()))){
						HX_STACK_LINE(359)
						Dynamic();
					}
					else{
						HX_STACK_LINE(359)
						bc->zpp_inner->compound->outer;
					}
				}
			}
			HX_STACK_LINE(361)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(364)
	{
		HX_STACK_LINE(365)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(366)
		while((true)){
			HX_STACK_LINE(366)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(366)
				break;
			}
			HX_STACK_LINE(367)
			::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(369)
				::nape::constraint::Constraint cc = c->copy(dict,todo);		HX_STACK_VAR(cc,"cc");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					if (((((  (((cc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(cc->zpp_inner->compound->outer) )) != ret))){
						HX_STACK_LINE(370)
						if (((((  (((cc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(cc->zpp_inner->compound->outer) )) != null()))){
							HX_STACK_LINE(370)
							((  (((cc->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(cc->zpp_inner->compound->outer) ))->zpp_inner->wrap_constraints->remove(cc);
						}
						HX_STACK_LINE(370)
						if (((ret != null()))){
							HX_STACK_LINE(370)
							::nape::constraint::ConstraintList _this = ret->zpp_inner->wrap_constraints;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(370)
							if ((_this->zpp_inner->reverse_flag)){
								HX_STACK_LINE(370)
								_this->push(cc);
							}
							else{
								HX_STACK_LINE(370)
								_this->unshift(cc);
							}
						}
					}
					HX_STACK_LINE(370)
					if (((cc->zpp_inner->compound == null()))){
						HX_STACK_LINE(370)
						Dynamic();
					}
					else{
						HX_STACK_LINE(370)
						cc->zpp_inner->compound->outer;
					}
				}
			}
			HX_STACK_LINE(372)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(375)
	if ((root)){
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			if ((!(((todo->length > (int)0))))){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(377)
			::zpp_nape::constraint::ZPP_CopyHelper xcb = todo->pop().StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(xcb,"xcb");
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(378)
				while((true)){
					HX_STACK_LINE(378)
					if ((!(((_g < dict->length))))){
						HX_STACK_LINE(378)
						break;
					}
					HX_STACK_LINE(378)
					::zpp_nape::constraint::ZPP_CopyHelper idc = dict->__get(_g).StaticCast< ::zpp_nape::constraint::ZPP_CopyHelper >();		HX_STACK_VAR(idc,"idc");
					HX_STACK_LINE(378)
					++(_g);
					HX_STACK_LINE(379)
					if (((idc->id == xcb->id))){
						HX_STACK_LINE(380)
						xcb->cb(idc->bc);
						HX_STACK_LINE(381)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(386)
	this->copyto(ret);
	HX_STACK_LINE(387)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Compound_obj,copy,return )


ZPP_Compound_obj::ZPP_Compound_obj()
{
}

void ZPP_Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Compound);
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(bodies,"bodies");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(compounds,"compounds");
	HX_MARK_MEMBER_NAME(wrap_bodies,"wrap_bodies");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(wrap_compounds,"wrap_compounds");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(space,"space");
	::zpp_nape::phys::ZPP_Interactor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(bodies,"bodies");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(compounds,"compounds");
	HX_VISIT_MEMBER_NAME(wrap_bodies,"wrap_bodies");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(wrap_compounds,"wrap_compounds");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(space,"space");
	::zpp_nape::phys::ZPP_Interactor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Compound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { return bodies; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compounds") ) { return compounds; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"breakApart") ) { return breakApart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"wrap_bodies") ) { return wrap_bodies; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"bodies_adder") ) { return bodies_adder_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodies_subber") ) { return bodies_subber_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wrap_compounds") ) { return wrap_compounds; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compounds_adder") ) { return compounds_adder_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"compounds_subber") ) { return compounds_subber_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bodies_modifiable") ) { return bodies_modifiable_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints_adder") ) { return constraints_adder_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__imutable_midstep") ) { return __imutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"constraints_subber") ) { return constraints_subber_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compounds_modifiable") ) { return compounds_modifiable_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"constraints_modifiable") ) { return constraints_modifiable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bodies") ) { bodies=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compounds") ) { compounds=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Compound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_bodies") ) { wrap_bodies=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wrap_compounds") ) { wrap_compounds=inValue.Cast< ::nape::phys::CompoundList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Compound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("bodies"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("compounds"));
	outFields->push(HX_CSTRING("wrap_bodies"));
	outFields->push(HX_CSTRING("wrap_constraints"));
	outFields->push(HX_CSTRING("wrap_compounds"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("space"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Compound*/ ,(int)offsetof(ZPP_Compound_obj,outer),HX_CSTRING("outer")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Body*/ ,(int)offsetof(ZPP_Compound_obj,bodies),HX_CSTRING("bodies")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Constraint*/ ,(int)offsetof(ZPP_Compound_obj,constraints),HX_CSTRING("constraints")},
	{hx::fsObject /*::zpp_nape::util::ZNPList_ZPP_Compound*/ ,(int)offsetof(ZPP_Compound_obj,compounds),HX_CSTRING("compounds")},
	{hx::fsObject /*::nape::phys::BodyList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_bodies),HX_CSTRING("wrap_bodies")},
	{hx::fsObject /*::nape::constraint::ConstraintList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_constraints),HX_CSTRING("wrap_constraints")},
	{hx::fsObject /*::nape::phys::CompoundList*/ ,(int)offsetof(ZPP_Compound_obj,wrap_compounds),HX_CSTRING("wrap_compounds")},
	{hx::fsInt,(int)offsetof(ZPP_Compound_obj,depth),HX_CSTRING("depth")},
	{hx::fsObject /*::zpp_nape::phys::ZPP_Compound*/ ,(int)offsetof(ZPP_Compound_obj,compound),HX_CSTRING("compound")},
	{hx::fsObject /*::zpp_nape::space::ZPP_Space*/ ,(int)offsetof(ZPP_Compound_obj,space),HX_CSTRING("space")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outer"),
	HX_CSTRING("bodies"),
	HX_CSTRING("constraints"),
	HX_CSTRING("compounds"),
	HX_CSTRING("wrap_bodies"),
	HX_CSTRING("wrap_constraints"),
	HX_CSTRING("wrap_compounds"),
	HX_CSTRING("depth"),
	HX_CSTRING("compound"),
	HX_CSTRING("space"),
	HX_CSTRING("__imutable_midstep"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("breakApart"),
	HX_CSTRING("bodies_adder"),
	HX_CSTRING("bodies_subber"),
	HX_CSTRING("bodies_modifiable"),
	HX_CSTRING("constraints_adder"),
	HX_CSTRING("constraints_subber"),
	HX_CSTRING("constraints_modifiable"),
	HX_CSTRING("compounds_adder"),
	HX_CSTRING("compounds_subber"),
	HX_CSTRING("compounds_modifiable"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Compound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Compound_obj::__mClass,"__mClass");
};

#endif

Class ZPP_Compound_obj::__mClass;

void ZPP_Compound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Compound"), hx::TCanCast< ZPP_Compound_obj> ,sStaticFields,sMemberFields,
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

void ZPP_Compound_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace phys
