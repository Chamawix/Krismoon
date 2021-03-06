#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Edge
#include <nape/shape/Edge.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace nape{
namespace dynamics{

Void CollisionArbiter_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.CollisionArbiter","new",0xd8a0cabd,"nape.dynamics.CollisionArbiter.new","nape/dynamics/CollisionArbiter.hx",728,0xb8178f73)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(730)
	if ((!(::zpp_nape::dynamics::ZPP_Arbiter_obj::internal))){
		HX_STACK_LINE(730)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot instantiate CollisionArbiter derp!"));
	}
	HX_STACK_LINE(732)
	super::__construct();
}
;
	return null();
}

//CollisionArbiter_obj::~CollisionArbiter_obj() { }

Dynamic CollisionArbiter_obj::__CreateEmpty() { return  new CollisionArbiter_obj; }
hx::ObjectPtr< CollisionArbiter_obj > CollisionArbiter_obj::__new()
{  hx::ObjectPtr< CollisionArbiter_obj > result = new CollisionArbiter_obj();
	result->__construct();
	return result;}

Dynamic CollisionArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollisionArbiter_obj > result = new CollisionArbiter_obj();
	result->__construct();
	return result;}

::nape::dynamics::ContactList CollisionArbiter_obj::get_contacts( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_contacts",0x33e1d7df,"nape.dynamics.CollisionArbiter.get_contacts","nape/dynamics/CollisionArbiter.hx",183,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(185)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(187)
	if (((this->zpp_inner->colarb->wrap_contacts == null()))){
		HX_STACK_LINE(187)
		this->zpp_inner->colarb->setupcontacts();
	}
	HX_STACK_LINE(188)
	return this->zpp_inner->colarb->wrap_contacts;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_contacts,return )

::nape::geom::Vec2 CollisionArbiter_obj::get_normal( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_normal",0x34ea9d33,"nape.dynamics.CollisionArbiter.get_normal","nape/dynamics/CollisionArbiter.hx",199,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(201)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(203)
	if (((this->zpp_inner->colarb->wrap_normal == null()))){
		HX_STACK_LINE(203)
		this->zpp_inner->colarb->getnormal();
	}
	HX_STACK_LINE(204)
	return this->zpp_inner->colarb->wrap_normal;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_normal,return )

Float CollisionArbiter_obj::get_radius( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_radius",0xb577fb5e,"nape.dynamics.CollisionArbiter.get_radius","nape/dynamics/CollisionArbiter.hx",213,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(215)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(217)
	return this->zpp_inner->colarb->radius;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_radius,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge1( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_referenceEdge1",0x7f96cc95,"nape.dynamics.CollisionArbiter.get_referenceEdge1","nape/dynamics/CollisionArbiter.hx",225,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(227)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(229)
	::zpp_nape::shape::ZPP_Edge edge = this->zpp_inner->colarb->__ref_edge1;		HX_STACK_VAR(edge,"edge");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::zpp_nape::shape::ZPP_Edge &edge){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",230,0xb8178f73)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",230,0xb8178f73)
						{
							HX_STACK_LINE(230)
							::nape::shape::Shape _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(230)
							{
								HX_STACK_LINE(230)
								if ((!(__this->zpp_inner->active))){
									HX_STACK_LINE(230)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
								}
								HX_STACK_LINE(230)
								if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
									HX_STACK_LINE(230)
									_this = __this->zpp_inner->ws2->outer;
								}
								else{
									HX_STACK_LINE(230)
									_this = __this->zpp_inner->ws1->outer;
								}
							}
							HX_STACK_LINE(230)
							return (_this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::nape::shape::Shape Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",230,0xb8178f73)
						{
							HX_STACK_LINE(230)
							if ((!(__this->zpp_inner->active))){
								HX_STACK_LINE(230)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
							}
							HX_STACK_LINE(230)
							return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws2->outer) : ::nape::shape::Shape(__this->zpp_inner->ws1->outer) );
						}
						return null();
					}
				};
				HX_STACK_LINE(230)
				return (  ((!((!(_Function_2_1::Block(__this)))))) ? bool(((_Function_2_2::Block(__this))->zpp_inner != edge->polygon)) : bool(true) );
			}
			return null();
		}
	};
	HX_STACK_LINE(230)
	if (((  (((edge != null()))) ? bool(_Function_1_1::Block(this,edge)) : bool(false) ))){
		HX_STACK_LINE(230)
		edge = this->zpp_inner->colarb->__ref_edge2;
	}
	HX_STACK_LINE(231)
	if (((edge == null()))){
		HX_STACK_LINE(231)
		return null();
	}
	else{
		HX_STACK_LINE(231)
		return edge->wrapper();
	}
	HX_STACK_LINE(231)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge1,return )

::nape::shape::Edge CollisionArbiter_obj::get_referenceEdge2( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_referenceEdge2",0x7f96cc96,"nape.dynamics.CollisionArbiter.get_referenceEdge2","nape/dynamics/CollisionArbiter.hx",239,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(241)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(243)
	::zpp_nape::shape::ZPP_Edge edge = this->zpp_inner->colarb->__ref_edge1;		HX_STACK_VAR(edge,"edge");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::zpp_nape::shape::ZPP_Edge &edge){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",244,0xb8178f73)
			{
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",244,0xb8178f73)
						{
							HX_STACK_LINE(244)
							::nape::shape::Shape _this;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(244)
							{
								HX_STACK_LINE(244)
								if ((!(__this->zpp_inner->active))){
									HX_STACK_LINE(244)
									HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
								}
								HX_STACK_LINE(244)
								if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
									HX_STACK_LINE(244)
									_this = __this->zpp_inner->ws1->outer;
								}
								else{
									HX_STACK_LINE(244)
									_this = __this->zpp_inner->ws2->outer;
								}
							}
							HX_STACK_LINE(244)
							return (_this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static ::nape::shape::Shape Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",244,0xb8178f73)
						{
							HX_STACK_LINE(244)
							if ((!(__this->zpp_inner->active))){
								HX_STACK_LINE(244)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
							}
							HX_STACK_LINE(244)
							return (  (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))) ? ::nape::shape::Shape(__this->zpp_inner->ws1->outer) : ::nape::shape::Shape(__this->zpp_inner->ws2->outer) );
						}
						return null();
					}
				};
				HX_STACK_LINE(244)
				return (  ((!((!(_Function_2_1::Block(__this)))))) ? bool(((_Function_2_2::Block(__this))->zpp_inner != edge->polygon)) : bool(true) );
			}
			return null();
		}
	};
	HX_STACK_LINE(244)
	if (((  (((edge != null()))) ? bool(_Function_1_1::Block(this,edge)) : bool(false) ))){
		HX_STACK_LINE(244)
		edge = this->zpp_inner->colarb->__ref_edge2;
	}
	HX_STACK_LINE(245)
	if (((edge == null()))){
		HX_STACK_LINE(245)
		return null();
	}
	else{
		HX_STACK_LINE(245)
		return edge->wrapper();
	}
	HX_STACK_LINE(245)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_referenceEdge2,return )

bool CollisionArbiter_obj::firstVertex( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","firstVertex",0xec742b11,"nape.dynamics.CollisionArbiter.firstVertex","nape/dynamics/CollisionArbiter.hx",257,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(259)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(261)
	bool poly2circle = ((this->zpp_inner->colarb->__ref_edge1 != null()) != ((this->zpp_inner->colarb->__ref_edge2 != null())));		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(262)
	if ((poly2circle)){
		HX_STACK_LINE(262)
		return (this->zpp_inner->colarb->__ref_vertex == (int)-1);
	}
	else{
		HX_STACK_LINE(262)
		return false;
	}
	HX_STACK_LINE(262)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,firstVertex,return )

bool CollisionArbiter_obj::secondVertex( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","secondVertex",0x2e747ffb,"nape.dynamics.CollisionArbiter.secondVertex","nape/dynamics/CollisionArbiter.hx",276,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(278)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(280)
	bool poly2circle = ((this->zpp_inner->colarb->__ref_edge1 != null()) != ((this->zpp_inner->colarb->__ref_edge2 != null())));		HX_STACK_VAR(poly2circle,"poly2circle");
	HX_STACK_LINE(281)
	if ((poly2circle)){
		HX_STACK_LINE(281)
		return (this->zpp_inner->colarb->__ref_vertex == (int)1);
	}
	else{
		HX_STACK_LINE(281)
		return false;
	}
	HX_STACK_LINE(281)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,secondVertex,return )

::nape::geom::Vec3 CollisionArbiter_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","normalImpulse",0xbc1d19eb,"nape.dynamics.CollisionArbiter.normalImpulse","nape/dynamics/CollisionArbiter.hx",300,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(302)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(302)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",305,0xb8178f73)
				{
					HX_STACK_LINE(305)
					::nape::phys::Body _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(305)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(305)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(305)
							_g = __this->zpp_inner->b2->outer;
						}
						else{
							HX_STACK_LINE(305)
							_g = __this->zpp_inner->b1->outer;
						}
					}
					HX_STACK_LINE(305)
					return (body != _g);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",305,0xb8178f73)
				{
					HX_STACK_LINE(305)
					::nape::phys::Body _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(305)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(305)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(305)
							_g1 = __this->zpp_inner->b1->outer;
						}
						else{
							HX_STACK_LINE(305)
							_g1 = __this->zpp_inner->b2->outer;
						}
					}
					HX_STACK_LINE(305)
					return (body != _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(305)
		if (((  (((  (((body != null()))) ? bool(_Function_1_1::Block(this,body)) : bool(false) ))) ? bool(_Function_1_2::Block(this,body)) : bool(false) ))){
			HX_STACK_LINE(305)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(307)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(308)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(325)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(326)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(328)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(329)
			::nape::geom::Vec3 imp = colarb->oc1->wrapper()->normalImpulse(body);		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(330)
			{
				HX_STACK_LINE(331)
				int t = (int)1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(332)
				{
					HX_STACK_LINE(333)
					int t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(342)
					Float _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(342)
					{
						HX_STACK_LINE(342)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(342)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(342)
						{
							HX_STACK_LINE(342)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(342)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(342)
								_this->_validate();
							}
						}
						HX_STACK_LINE(342)
						_g2 = imp->zpp_inner->x;
					}
					HX_STACK_LINE(342)
					Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(342)
					hx::AddEq(retx,_g3);
					HX_STACK_LINE(343)
					Float _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(343)
					{
						HX_STACK_LINE(343)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(343)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(343)
						{
							HX_STACK_LINE(343)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(343)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(343)
								_this->_validate();
							}
						}
						HX_STACK_LINE(343)
						_g4 = imp->zpp_inner->y;
					}
					HX_STACK_LINE(343)
					Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(343)
					hx::AddEq(rety,_g5);
				}
				HX_STACK_LINE(345)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(345)
				{
					HX_STACK_LINE(345)
					if (((bool((imp != null())) && bool(imp->zpp_disp)))){
						HX_STACK_LINE(345)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(345)
					{
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(345)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(345)
							_this->_validate();
						}
					}
					HX_STACK_LINE(345)
					_g6 = imp->zpp_inner->z;
				}
				HX_STACK_LINE(345)
				Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(345)
				hx::AddEq(retz,_g7);
			}
			HX_STACK_LINE(347)
			imp->dispose();
		}
		HX_STACK_LINE(350)
		if ((colarb->hc2)){
			HX_STACK_LINE(351)
			if (((bool(!(freshOnly)) || bool(colarb->oc2->fresh)))){
				HX_STACK_LINE(352)
				::nape::geom::Vec3 imp = colarb->oc2->wrapper()->normalImpulse(body);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(354)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(355)
					{
						HX_STACK_LINE(356)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(365)
						Float _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(365)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(365)
							{
								HX_STACK_LINE(365)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(365)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(365)
									_this->_validate();
								}
							}
							HX_STACK_LINE(365)
							_g8 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(365)
						Float _g9 = (_g8 * t1);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(365)
						hx::AddEq(retx,_g9);
						HX_STACK_LINE(366)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(366)
						{
							HX_STACK_LINE(366)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(366)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(366)
							{
								HX_STACK_LINE(366)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(366)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(366)
									_this->_validate();
								}
							}
							HX_STACK_LINE(366)
							_g10 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(366)
						Float _g11 = (_g10 * t1);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(366)
						hx::AddEq(rety,_g11);
					}
					HX_STACK_LINE(368)
					Float _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(368)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(368)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(368)
								_this->_validate();
							}
						}
						HX_STACK_LINE(368)
						_g12 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(368)
					Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(368)
					hx::AddEq(retz,_g13);
				}
				HX_STACK_LINE(370)
				imp->dispose();
			}
		}
		HX_STACK_LINE(373)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,normalImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","tangentImpulse",0xec0a4733,"nape.dynamics.CollisionArbiter.tangentImpulse","nape/dynamics/CollisionArbiter.hx",394,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(396)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(396)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",399,0xb8178f73)
				{
					HX_STACK_LINE(399)
					::nape::phys::Body _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(399)
					{
						HX_STACK_LINE(399)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(399)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(399)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(399)
							_g = __this->zpp_inner->b2->outer;
						}
						else{
							HX_STACK_LINE(399)
							_g = __this->zpp_inner->b1->outer;
						}
					}
					HX_STACK_LINE(399)
					return (body != _g);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",399,0xb8178f73)
				{
					HX_STACK_LINE(399)
					::nape::phys::Body _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(399)
					{
						HX_STACK_LINE(399)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(399)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(399)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(399)
							_g1 = __this->zpp_inner->b1->outer;
						}
						else{
							HX_STACK_LINE(399)
							_g1 = __this->zpp_inner->b2->outer;
						}
					}
					HX_STACK_LINE(399)
					return (body != _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(399)
		if (((  (((  (((body != null()))) ? bool(_Function_1_1::Block(this,body)) : bool(false) ))) ? bool(_Function_1_2::Block(this,body)) : bool(false) ))){
			HX_STACK_LINE(399)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(401)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(402)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(419)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(420)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(422)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(423)
			::nape::geom::Vec3 imp = colarb->oc1->wrapper()->tangentImpulse(body);		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(425)
				int t = (int)1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(427)
					int t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(436)
					Float _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(436)
					{
						HX_STACK_LINE(436)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(436)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(436)
						{
							HX_STACK_LINE(436)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(436)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(436)
								_this->_validate();
							}
						}
						HX_STACK_LINE(436)
						_g2 = imp->zpp_inner->x;
					}
					HX_STACK_LINE(436)
					Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(436)
					hx::AddEq(retx,_g3);
					HX_STACK_LINE(437)
					Float _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(437)
					{
						HX_STACK_LINE(437)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(437)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(437)
						{
							HX_STACK_LINE(437)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(437)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(437)
								_this->_validate();
							}
						}
						HX_STACK_LINE(437)
						_g4 = imp->zpp_inner->y;
					}
					HX_STACK_LINE(437)
					Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(437)
					hx::AddEq(rety,_g5);
				}
				HX_STACK_LINE(439)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					if (((bool((imp != null())) && bool(imp->zpp_disp)))){
						HX_STACK_LINE(439)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(439)
					{
						HX_STACK_LINE(439)
						::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(439)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(439)
							_this->_validate();
						}
					}
					HX_STACK_LINE(439)
					_g6 = imp->zpp_inner->z;
				}
				HX_STACK_LINE(439)
				Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(439)
				hx::AddEq(retz,_g7);
			}
			HX_STACK_LINE(441)
			imp->dispose();
		}
		HX_STACK_LINE(444)
		if ((colarb->hc2)){
			HX_STACK_LINE(445)
			if (((bool(!(freshOnly)) || bool(colarb->oc2->fresh)))){
				HX_STACK_LINE(446)
				::nape::geom::Vec3 imp = colarb->oc2->wrapper()->tangentImpulse(body);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(448)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(449)
					{
						HX_STACK_LINE(450)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(459)
						Float _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(459)
						{
							HX_STACK_LINE(459)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(459)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(459)
							{
								HX_STACK_LINE(459)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(459)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(459)
									_this->_validate();
								}
							}
							HX_STACK_LINE(459)
							_g8 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(459)
						Float _g9 = (_g8 * t1);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(459)
						hx::AddEq(retx,_g9);
						HX_STACK_LINE(460)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(460)
						{
							HX_STACK_LINE(460)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(460)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(460)
							{
								HX_STACK_LINE(460)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(460)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(460)
									_this->_validate();
								}
							}
							HX_STACK_LINE(460)
							_g10 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(460)
						Float _g11 = (_g10 * t1);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(460)
						hx::AddEq(rety,_g11);
					}
					HX_STACK_LINE(462)
					Float _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(462)
					{
						HX_STACK_LINE(462)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(462)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(462)
						{
							HX_STACK_LINE(462)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(462)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(462)
								_this->_validate();
							}
						}
						HX_STACK_LINE(462)
						_g12 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(462)
					Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(462)
					hx::AddEq(retz,_g13);
				}
				HX_STACK_LINE(464)
				imp->dispose();
			}
		}
		HX_STACK_LINE(467)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,tangentImpulse,return )

::nape::geom::Vec3 CollisionArbiter_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","totalImpulse",0x690d3754,"nape.dynamics.CollisionArbiter.totalImpulse","nape/dynamics/CollisionArbiter.hx",485,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(487)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(487)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",490,0xb8178f73)
				{
					HX_STACK_LINE(490)
					::nape::phys::Body _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(490)
					{
						HX_STACK_LINE(490)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(490)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(490)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(490)
							_g = __this->zpp_inner->b2->outer;
						}
						else{
							HX_STACK_LINE(490)
							_g = __this->zpp_inner->b1->outer;
						}
					}
					HX_STACK_LINE(490)
					return (body != _g);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",490,0xb8178f73)
				{
					HX_STACK_LINE(490)
					::nape::phys::Body _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(490)
					{
						HX_STACK_LINE(490)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(490)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(490)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(490)
							_g1 = __this->zpp_inner->b1->outer;
						}
						else{
							HX_STACK_LINE(490)
							_g1 = __this->zpp_inner->b2->outer;
						}
					}
					HX_STACK_LINE(490)
					return (body != _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(490)
		if (((  (((  (((body != null()))) ? bool(_Function_1_1::Block(this,body)) : bool(false) ))) ? bool(_Function_1_2::Block(this,body)) : bool(false) ))){
			HX_STACK_LINE(490)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(492)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(510)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(511)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(513)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(514)
			::nape::geom::Vec3 imp = colarb->oc1->wrapper()->totalImpulse(body);		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(516)
				int t = (int)1;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(517)
				{
					HX_STACK_LINE(518)
					int t1 = t;		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(527)
					Float _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(527)
					{
						HX_STACK_LINE(527)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(527)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(527)
						{
							HX_STACK_LINE(527)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(527)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(527)
								_this->_validate();
							}
						}
						HX_STACK_LINE(527)
						_g2 = imp->zpp_inner->x;
					}
					HX_STACK_LINE(527)
					Float _g3 = (_g2 * t1);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(527)
					hx::AddEq(retx,_g3);
					HX_STACK_LINE(528)
					Float _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(528)
					{
						HX_STACK_LINE(528)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(528)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(528)
						{
							HX_STACK_LINE(528)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(528)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(528)
								_this->_validate();
							}
						}
						HX_STACK_LINE(528)
						_g4 = imp->zpp_inner->y;
					}
					HX_STACK_LINE(528)
					Float _g5 = (_g4 * t1);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(528)
					hx::AddEq(rety,_g5);
				}
				HX_STACK_LINE(530)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(530)
				{
					HX_STACK_LINE(530)
					if (((bool((imp != null())) && bool(imp->zpp_disp)))){
						HX_STACK_LINE(530)
						HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
					}
					HX_STACK_LINE(530)
					{
						HX_STACK_LINE(530)
						::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(530)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(530)
							_this->_validate();
						}
					}
					HX_STACK_LINE(530)
					_g6 = imp->zpp_inner->z;
				}
				HX_STACK_LINE(530)
				Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(530)
				hx::AddEq(retz,_g7);
			}
			HX_STACK_LINE(532)
			imp->dispose();
		}
		HX_STACK_LINE(535)
		if ((colarb->hc2)){
			HX_STACK_LINE(536)
			if (((bool(!(freshOnly)) || bool(colarb->oc2->fresh)))){
				HX_STACK_LINE(537)
				::nape::geom::Vec3 imp = colarb->oc2->wrapper()->totalImpulse(body);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(538)
				{
					HX_STACK_LINE(539)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(540)
					{
						HX_STACK_LINE(541)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(550)
						Float _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(550)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(550)
							{
								HX_STACK_LINE(550)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(550)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(550)
									_this->_validate();
								}
							}
							HX_STACK_LINE(550)
							_g8 = imp->zpp_inner->x;
						}
						HX_STACK_LINE(550)
						Float _g9 = (_g8 * t1);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(550)
						hx::AddEq(retx,_g9);
						HX_STACK_LINE(551)
						Float _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							if (((bool((imp != null())) && bool(imp->zpp_disp)))){
								HX_STACK_LINE(551)
								HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
							}
							HX_STACK_LINE(551)
							{
								HX_STACK_LINE(551)
								::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(551)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(551)
									_this->_validate();
								}
							}
							HX_STACK_LINE(551)
							_g10 = imp->zpp_inner->y;
						}
						HX_STACK_LINE(551)
						Float _g11 = (_g10 * t1);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(551)
						hx::AddEq(rety,_g11);
					}
					HX_STACK_LINE(553)
					Float _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(553)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec3 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(553)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(553)
								_this->_validate();
							}
						}
						HX_STACK_LINE(553)
						_g12 = imp->zpp_inner->z;
					}
					HX_STACK_LINE(553)
					Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(553)
					hx::AddEq(retz,_g13);
				}
				HX_STACK_LINE(555)
				imp->dispose();
			}
		}
		HX_STACK_LINE(558)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


Float CollisionArbiter_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","rollingImpulse",0x51a9ce73,"nape.dynamics.CollisionArbiter.rollingImpulse","nape/dynamics/CollisionArbiter.hx",573,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(body,"body")
	HX_STACK_ARG(freshOnly,"freshOnly")
{
		HX_STACK_LINE(575)
		if ((!(this->zpp_inner->active))){
			HX_STACK_LINE(575)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",578,0xb8178f73)
				{
					HX_STACK_LINE(578)
					::nape::phys::Body _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(578)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(578)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(578)
							_g = __this->zpp_inner->b2->outer;
						}
						else{
							HX_STACK_LINE(578)
							_g = __this->zpp_inner->b1->outer;
						}
					}
					HX_STACK_LINE(578)
					return (body != _g);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::nape::dynamics::CollisionArbiter_obj > __this,::nape::phys::Body &body){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nape/dynamics/CollisionArbiter.hx",578,0xb8178f73)
				{
					HX_STACK_LINE(578)
					::nape::phys::Body _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(578)
					{
						HX_STACK_LINE(578)
						if ((!(__this->zpp_inner->active))){
							HX_STACK_LINE(578)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
						}
						HX_STACK_LINE(578)
						if (((__this->zpp_inner->ws1->id > __this->zpp_inner->ws2->id))){
							HX_STACK_LINE(578)
							_g1 = __this->zpp_inner->b1->outer;
						}
						else{
							HX_STACK_LINE(578)
							_g1 = __this->zpp_inner->b2->outer;
						}
					}
					HX_STACK_LINE(578)
					return (body != _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(578)
		if (((  (((  (((body != null()))) ? bool(_Function_1_1::Block(this,body)) : bool(false) ))) ? bool(_Function_1_2::Block(this,body)) : bool(false) ))){
			HX_STACK_LINE(578)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter does not relate to body"));
		}
		HX_STACK_LINE(580)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(581)
		if (((bool(!(freshOnly)) || bool(colarb->oc1->fresh)))){
			HX_STACK_LINE(581)
			return colarb->oc1->wrapper()->rollingImpulse(body);
		}
		else{
			HX_STACK_LINE(582)
			return 0.0;
		}
		HX_STACK_LINE(581)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(CollisionArbiter_obj,rollingImpulse,return )

Float CollisionArbiter_obj::get_elasticity( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_elasticity",0x4a75c485,"nape.dynamics.CollisionArbiter.get_elasticity","nape/dynamics/CollisionArbiter.hx",596,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(598)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(600)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(601)
	if ((colarb->invalidated)){
		HX_STACK_LINE(601)
		colarb->invalidated = false;
		HX_STACK_LINE(601)
		{
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(601)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(601)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(601)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(601)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(601)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(601)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(601)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(601)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(601)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(601)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(601)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(601)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(601)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(601)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(601)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(601)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(602)
	return colarb->restitution;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_elasticity,return )

Float CollisionArbiter_obj::set_elasticity( Float elasticity){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_elasticity",0x6a95acf9,"nape.dynamics.CollisionArbiter.set_elasticity","nape/dynamics/CollisionArbiter.hx",604,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(elasticity,"elasticity")
	HX_STACK_LINE(605)
	{
		HX_STACK_LINE(607)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(607)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::elasticity is only mutable during a pre-handler"));
		}
		HX_STACK_LINE(610)
		if (((elasticity != elasticity))){
			HX_STACK_LINE(610)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::elasticity cannot be NaN"));
		}
		HX_STACK_LINE(611)
		if (((elasticity < (int)0))){
			HX_STACK_LINE(611)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::elasticity cannot be negative"));
		}
		HX_STACK_LINE(614)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(615)
		colarb->restitution = elasticity;
		HX_STACK_LINE(616)
		colarb->userdef_restitution = true;
	}
	HX_STACK_LINE(618)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(618)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(618)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(618)
	if ((colarb->invalidated)){
		HX_STACK_LINE(618)
		colarb->invalidated = false;
		HX_STACK_LINE(618)
		{
			HX_STACK_LINE(618)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(618)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(618)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(618)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(618)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(618)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(618)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(618)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(618)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(618)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(618)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(618)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(618)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(618)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(618)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(618)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(618)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(618)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(618)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(618)
	return colarb->restitution;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_elasticity,return )

Float CollisionArbiter_obj::get_dynamicFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_dynamicFriction",0x4389ff0d,"nape.dynamics.CollisionArbiter.get_dynamicFriction","nape/dynamics/CollisionArbiter.hx",631,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(633)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(633)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(635)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(636)
	if ((colarb->invalidated)){
		HX_STACK_LINE(636)
		colarb->invalidated = false;
		HX_STACK_LINE(636)
		{
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(636)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(636)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(636)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(636)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(636)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(636)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(636)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(636)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(636)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(636)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(636)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(636)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(636)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(636)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(636)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(636)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(637)
	return colarb->dyn_fric;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_dynamicFriction,return )

Float CollisionArbiter_obj::set_dynamicFriction( Float dynamicFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_dynamicFriction",0x8026f219,"nape.dynamics.CollisionArbiter.set_dynamicFriction","nape/dynamics/CollisionArbiter.hx",639,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dynamicFriction,"dynamicFriction")
	HX_STACK_LINE(640)
	{
		HX_STACK_LINE(642)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(642)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::dynamicFriction is only mutable during a pre-handler"));
		}
		HX_STACK_LINE(645)
		if (((dynamicFriction != dynamicFriction))){
			HX_STACK_LINE(645)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::dynamicFriction cannot be NaN"));
		}
		HX_STACK_LINE(646)
		if (((dynamicFriction < (int)0))){
			HX_STACK_LINE(646)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::dynamicFriction cannot be negative"));
		}
		HX_STACK_LINE(649)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(650)
		colarb->dyn_fric = dynamicFriction;
		HX_STACK_LINE(651)
		colarb->userdef_dyn_fric = true;
	}
	HX_STACK_LINE(653)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(653)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(653)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(653)
	if ((colarb->invalidated)){
		HX_STACK_LINE(653)
		colarb->invalidated = false;
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(653)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(653)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(653)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(653)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(653)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(653)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(653)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(653)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(653)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(653)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(653)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(653)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(653)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(653)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(653)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(653)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(653)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(653)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(653)
	return colarb->dyn_fric;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_dynamicFriction,return )

Float CollisionArbiter_obj::get_staticFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_staticFriction",0x9e3d86d4,"nape.dynamics.CollisionArbiter.get_staticFriction","nape/dynamics/CollisionArbiter.hx",666,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(668)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(668)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(670)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(671)
	if ((colarb->invalidated)){
		HX_STACK_LINE(671)
		colarb->invalidated = false;
		HX_STACK_LINE(671)
		{
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(671)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(671)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(671)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(671)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(671)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(671)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(671)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(671)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(671)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(671)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(671)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(671)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(671)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(671)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(671)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(671)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(672)
	return colarb->stat_fric;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_staticFriction,return )

Float CollisionArbiter_obj::set_staticFriction( Float staticFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_staticFriction",0x7aecb948,"nape.dynamics.CollisionArbiter.set_staticFriction","nape/dynamics/CollisionArbiter.hx",674,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(staticFriction,"staticFriction")
	HX_STACK_LINE(675)
	{
		HX_STACK_LINE(677)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(677)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::staticFriction is only mutable during a pre-handler"));
		}
		HX_STACK_LINE(680)
		if (((staticFriction != staticFriction))){
			HX_STACK_LINE(680)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::staticFriction cannot be NaN"));
		}
		HX_STACK_LINE(681)
		if (((staticFriction < (int)0))){
			HX_STACK_LINE(681)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::staticFriction cannot be negative"));
		}
		HX_STACK_LINE(684)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(685)
		colarb->stat_fric = staticFriction;
		HX_STACK_LINE(686)
		colarb->userdef_stat_fric = true;
	}
	HX_STACK_LINE(688)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(688)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(688)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(688)
	if ((colarb->invalidated)){
		HX_STACK_LINE(688)
		colarb->invalidated = false;
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(688)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(688)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(688)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(688)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(688)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(688)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(688)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(688)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(688)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(688)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(688)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(688)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(688)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(688)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(688)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(688)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(688)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(688)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(688)
	return colarb->stat_fric;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_staticFriction,return )

Float CollisionArbiter_obj::get_rollingFriction( ){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","get_rollingFriction",0x20008313,"nape.dynamics.CollisionArbiter.get_rollingFriction","nape/dynamics/CollisionArbiter.hx",701,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(703)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(705)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(706)
	if ((colarb->invalidated)){
		HX_STACK_LINE(706)
		colarb->invalidated = false;
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(706)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(706)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(706)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(706)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(706)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(706)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(706)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(706)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(706)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(706)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(706)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(706)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(706)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(706)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(706)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(706)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(707)
	return colarb->rfric;
}


HX_DEFINE_DYNAMIC_FUNC0(CollisionArbiter_obj,get_rollingFriction,return )

Float CollisionArbiter_obj::set_rollingFriction( Float rollingFriction){
	HX_STACK_FRAME("nape.dynamics.CollisionArbiter","set_rollingFriction",0x5c9d761f,"nape.dynamics.CollisionArbiter.set_rollingFriction","nape/dynamics/CollisionArbiter.hx",709,0xb8178f73)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rollingFriction,"rollingFriction")
	HX_STACK_LINE(710)
	{
		HX_STACK_LINE(712)
		if ((!(this->zpp_inner->colarb->_mutable))){
			HX_STACK_LINE(712)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::rollingFriction is only mutable during a pre-handler"));
		}
		HX_STACK_LINE(715)
		if (((rollingFriction != rollingFriction))){
			HX_STACK_LINE(715)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::rollingFriction cannot be NaN"));
		}
		HX_STACK_LINE(716)
		if (((rollingFriction < (int)0))){
			HX_STACK_LINE(716)
			HX_STACK_DO_THROW(HX_CSTRING("Error: CollisionArbiter::rollingFriction cannot be negative"));
		}
		HX_STACK_LINE(719)
		::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
		HX_STACK_LINE(720)
		colarb->rfric = rollingFriction;
		HX_STACK_LINE(721)
		colarb->userdef_rfric = true;
	}
	HX_STACK_LINE(723)
	if ((!(this->zpp_inner->active))){
		HX_STACK_LINE(723)
		HX_STACK_DO_THROW(HX_CSTRING("Error: Arbiter not currently in use"));
	}
	HX_STACK_LINE(723)
	::zpp_nape::dynamics::ZPP_ColArbiter colarb = this->zpp_inner->colarb;		HX_STACK_VAR(colarb,"colarb");
	HX_STACK_LINE(723)
	if ((colarb->invalidated)){
		HX_STACK_LINE(723)
		colarb->invalidated = false;
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			if ((!(colarb->userdef_restitution))){
				HX_STACK_LINE(723)
				if (((bool((colarb->s1->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY)) || bool((colarb->s2->material->elasticity <= ::Math_obj::NEGATIVE_INFINITY))))){
					HX_STACK_LINE(723)
					colarb->restitution = (int)0;
				}
				else{
					HX_STACK_LINE(723)
					if (((bool((colarb->s1->material->elasticity >= ::Math_obj::POSITIVE_INFINITY)) || bool((colarb->s2->material->elasticity >= ::Math_obj::POSITIVE_INFINITY))))){
						HX_STACK_LINE(723)
						colarb->restitution = (int)1;
					}
					else{
						HX_STACK_LINE(723)
						colarb->restitution = (Float(((colarb->s1->material->elasticity + colarb->s2->material->elasticity))) / Float((int)2));
					}
				}
				HX_STACK_LINE(723)
				if (((colarb->restitution < (int)0))){
					HX_STACK_LINE(723)
					colarb->restitution = (int)0;
				}
				HX_STACK_LINE(723)
				if (((colarb->restitution > (int)1))){
					HX_STACK_LINE(723)
					colarb->restitution = (int)1;
				}
			}
			HX_STACK_LINE(723)
			if ((!(colarb->userdef_dyn_fric))){
				HX_STACK_LINE(723)
				Float _g = ::Math_obj::sqrt((colarb->s1->material->dynamicFriction * colarb->s2->material->dynamicFriction));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(723)
				colarb->dyn_fric = _g;
			}
			HX_STACK_LINE(723)
			if ((!(colarb->userdef_stat_fric))){
				HX_STACK_LINE(723)
				Float _g1 = ::Math_obj::sqrt((colarb->s1->material->staticFriction * colarb->s2->material->staticFriction));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(723)
				colarb->stat_fric = _g1;
			}
			HX_STACK_LINE(723)
			if ((!(colarb->userdef_rfric))){
				HX_STACK_LINE(723)
				Float _g2 = ::Math_obj::sqrt((colarb->s1->material->rollingFriction * colarb->s2->material->rollingFriction));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(723)
				colarb->rfric = _g2;
			}
		}
	}
	HX_STACK_LINE(723)
	return colarb->rfric;
}


HX_DEFINE_DYNAMIC_FUNC1(CollisionArbiter_obj,set_rollingFriction,return )


CollisionArbiter_obj::CollisionArbiter_obj()
{
}

Dynamic CollisionArbiter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return get_normal(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return get_radius(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contacts") ) { return get_contacts(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_normal") ) { return get_normal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return get_elasticity(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstVertex") ) { return firstVertex_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_contacts") ) { return get_contacts_dyn(); }
		if (HX_FIELD_EQ(inName,"secondVertex") ) { return secondVertex_dyn(); }
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"referenceEdge1") ) { return get_referenceEdge1(); }
		if (HX_FIELD_EQ(inName,"referenceEdge2") ) { return get_referenceEdge2(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_elasticity") ) { return get_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_elasticity") ) { return set_elasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return get_staticFriction(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return get_dynamicFriction(); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return get_rollingFriction(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_referenceEdge1") ) { return get_referenceEdge1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_referenceEdge2") ) { return get_referenceEdge2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_staticFriction") ) { return get_staticFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_staticFriction") ) { return set_staticFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_dynamicFriction") ) { return get_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dynamicFriction") ) { return set_dynamicFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rollingFriction") ) { return get_rollingFriction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rollingFriction") ) { return set_rollingFriction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CollisionArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return set_elasticity(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"staticFriction") ) { return set_staticFriction(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dynamicFriction") ) { return set_dynamicFriction(inValue); }
		if (HX_FIELD_EQ(inName,"rollingFriction") ) { return set_rollingFriction(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CollisionArbiter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("contacts"));
	outFields->push(HX_CSTRING("normal"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("referenceEdge1"));
	outFields->push(HX_CSTRING("referenceEdge2"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("dynamicFriction"));
	outFields->push(HX_CSTRING("staticFriction"));
	outFields->push(HX_CSTRING("rollingFriction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_contacts"),
	HX_CSTRING("get_normal"),
	HX_CSTRING("get_radius"),
	HX_CSTRING("get_referenceEdge1"),
	HX_CSTRING("get_referenceEdge2"),
	HX_CSTRING("firstVertex"),
	HX_CSTRING("secondVertex"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("get_elasticity"),
	HX_CSTRING("set_elasticity"),
	HX_CSTRING("get_dynamicFriction"),
	HX_CSTRING("set_dynamicFriction"),
	HX_CSTRING("get_staticFriction"),
	HX_CSTRING("set_staticFriction"),
	HX_CSTRING("get_rollingFriction"),
	HX_CSTRING("set_rollingFriction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollisionArbiter_obj::__mClass,"__mClass");
};

#endif

Class CollisionArbiter_obj::__mClass;

void CollisionArbiter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.dynamics.CollisionArbiter"), hx::TCanCast< CollisionArbiter_obj> ,sStaticFields,sMemberFields,
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

void CollisionArbiter_obj::__boot()
{
}

} // end namespace nape
} // end namespace dynamics
