#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_RayResult_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","new",0xa7549be9,"zpp_nape.util.ZNPList_RayResult.new","zpp_nape/util/Lists.hx",14353,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14363)
	this->length = (int)0;
	HX_STACK_LINE(14362)
	this->pushmod = false;
	HX_STACK_LINE(14361)
	this->modified = false;
	HX_STACK_LINE(14354)
	this->head = null();
}
;
	return null();
}

//ZNPList_RayResult_obj::~ZNPList_RayResult_obj() { }

Dynamic ZNPList_RayResult_obj::__CreateEmpty() { return  new ZNPList_RayResult_obj; }
hx::ObjectPtr< ZNPList_RayResult_obj > ZNPList_RayResult_obj::__new()
{  hx::ObjectPtr< ZNPList_RayResult_obj > result = new ZNPList_RayResult_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_RayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_RayResult_obj > result = new ZNPList_RayResult_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","begin",0xb1c769f2,"zpp_nape.util.ZNPList_RayResult.begin","zpp_nape/util/Lists.hx",14359,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14359)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,begin,return )

Void ZNPList_RayResult_obj::setbegin( ::zpp_nape::util::ZNPNode_RayResult i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","setbegin",0x5d80a71e,"zpp_nape.util.ZNPList_RayResult.setbegin","zpp_nape/util/Lists.hx",14366,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(14367)
		this->head = i;
		HX_STACK_LINE(14368)
		this->modified = true;
		HX_STACK_LINE(14369)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,setbegin,(void))

::nape::geom::RayResult ZNPList_RayResult_obj::add( ::nape::geom::RayResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","add",0xa74abdaa,"zpp_nape.util.ZNPList_RayResult.add","zpp_nape/util/Lists.hx",14372,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14372)
	::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14372)
	{
		HX_STACK_LINE(14372)
		::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14372)
		{
			HX_STACK_LINE(14372)
			if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
				HX_STACK_LINE(14372)
				::zpp_nape::util::ZNPNode_RayResult _g = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(14372)
				ret = _g;
			}
			else{
				HX_STACK_LINE(14372)
				ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(14372)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14372)
				ret->next = null();
			}
			HX_STACK_LINE(14372)
			Dynamic();
		}
		HX_STACK_LINE(14372)
		ret->elt = o;
		HX_STACK_LINE(14372)
		temp = ret;
	}
	HX_STACK_LINE(14372)
	temp->next = this->head;
	HX_STACK_LINE(14372)
	this->head = temp;
	HX_STACK_LINE(14372)
	this->modified = true;
	HX_STACK_LINE(14372)
	(this->length)++;
	HX_STACK_LINE(14372)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,add,return )

::nape::geom::RayResult ZNPList_RayResult_obj::inlined_add( ::nape::geom::RayResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_add",0xfaa34916,"zpp_nape.util.ZNPList_RayResult.inlined_add","zpp_nape/util/Lists.hx",14376,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14385)
	::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14385)
	{
		HX_STACK_LINE(14386)
		::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14387)
		{
			HX_STACK_LINE(14388)
			if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
				HX_STACK_LINE(14389)
				::zpp_nape::util::ZNPNode_RayResult _g = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(14389)
				ret = _g;
			}
			else{
				HX_STACK_LINE(14395)
				ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(14396)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14397)
				ret->next = null();
			}
			HX_STACK_LINE(14402)
			Dynamic();
		}
		HX_STACK_LINE(14404)
		ret->elt = o;
		HX_STACK_LINE(14405)
		temp = ret;
	}
	HX_STACK_LINE(14407)
	temp->next = this->head;
	HX_STACK_LINE(14408)
	this->head = temp;
	HX_STACK_LINE(14409)
	this->modified = true;
	HX_STACK_LINE(14410)
	(this->length)++;
	HX_STACK_LINE(14411)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_add,return )

Void ZNPList_RayResult_obj::addAll( ::zpp_nape::util::ZNPList_RayResult x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","addAll",0xe0d95997,"zpp_nape.util.ZNPList_RayResult.addAll","zpp_nape/util/Lists.hx",14422,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(14423)
		::zpp_nape::util::ZNPNode_RayResult cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(14424)
		while((true)){
			HX_STACK_LINE(14424)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(14424)
				break;
			}
			HX_STACK_LINE(14425)
			::nape::geom::RayResult i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(14426)
			this->add(i);
			HX_STACK_LINE(14427)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,addAll,(void))

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::insert( ::zpp_nape::util::ZNPNode_RayResult cur,::nape::geom::RayResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","insert",0xdfbb9350,"zpp_nape.util.ZNPList_RayResult.insert","zpp_nape/util/Lists.hx",14432,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14432)
	::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14432)
	{
		HX_STACK_LINE(14432)
		::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14432)
		{
			HX_STACK_LINE(14432)
			if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
				HX_STACK_LINE(14432)
				::zpp_nape::util::ZNPNode_RayResult _g = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(14432)
				ret = _g;
			}
			else{
				HX_STACK_LINE(14432)
				ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(14432)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14432)
				ret->next = null();
			}
			HX_STACK_LINE(14432)
			Dynamic();
		}
		HX_STACK_LINE(14432)
		ret->elt = o;
		HX_STACK_LINE(14432)
		temp = ret;
	}
	HX_STACK_LINE(14432)
	if (((cur == null()))){
		HX_STACK_LINE(14432)
		temp->next = this->head;
		HX_STACK_LINE(14432)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(14432)
		temp->next = cur->next;
		HX_STACK_LINE(14432)
		cur->next = temp;
	}
	HX_STACK_LINE(14432)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14432)
	this->pushmod = _g1;
	HX_STACK_LINE(14432)
	(this->length)++;
	HX_STACK_LINE(14432)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_RayResult_obj,insert,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::inlined_insert( ::zpp_nape::util::ZNPNode_RayResult cur,::nape::geom::RayResult o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_insert",0x5b6ef364,"zpp_nape.util.ZNPList_RayResult.inlined_insert","zpp_nape/util/Lists.hx",14436,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(14445)
	::zpp_nape::util::ZNPNode_RayResult temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(14445)
	{
		HX_STACK_LINE(14446)
		::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14447)
		{
			HX_STACK_LINE(14448)
			if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
				HX_STACK_LINE(14449)
				::zpp_nape::util::ZNPNode_RayResult _g = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(14449)
				ret = _g;
			}
			else{
				HX_STACK_LINE(14455)
				ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(14456)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
				HX_STACK_LINE(14457)
				ret->next = null();
			}
			HX_STACK_LINE(14462)
			Dynamic();
		}
		HX_STACK_LINE(14464)
		ret->elt = o;
		HX_STACK_LINE(14465)
		temp = ret;
	}
	HX_STACK_LINE(14467)
	if (((cur == null()))){
		HX_STACK_LINE(14468)
		temp->next = this->head;
		HX_STACK_LINE(14469)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(14472)
		temp->next = cur->next;
		HX_STACK_LINE(14473)
		cur->next = temp;
	}
	HX_STACK_LINE(14475)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(14475)
	this->pushmod = _g1;
	HX_STACK_LINE(14476)
	(this->length)++;
	HX_STACK_LINE(14477)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_RayResult_obj,inlined_insert,return )

Void ZNPList_RayResult_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","pop",0xa756291a,"zpp_nape.util.ZNPList_RayResult.pop","zpp_nape/util/Lists.hx",14480,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14480)
		::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14480)
		this->head = ret->next;
		HX_STACK_LINE(14480)
		{
			HX_STACK_LINE(14480)
			::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14480)
			o->elt = null();
			HX_STACK_LINE(14480)
			o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
			HX_STACK_LINE(14480)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14480)
		if (((this->head == null()))){
			HX_STACK_LINE(14480)
			this->pushmod = true;
		}
		HX_STACK_LINE(14480)
		this->modified = true;
		HX_STACK_LINE(14480)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,pop,(void))

Void ZNPList_RayResult_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_pop",0xfaaeb486,"zpp_nape.util.ZNPList_RayResult.inlined_pop","zpp_nape/util/Lists.hx",14484,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14493)
		::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14494)
		this->head = ret->next;
		HX_STACK_LINE(14496)
		{
			HX_STACK_LINE(14497)
			::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(14506)
			o->elt = null();
			HX_STACK_LINE(14507)
			o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
			HX_STACK_LINE(14508)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(14513)
		if (((this->head == null()))){
			HX_STACK_LINE(14513)
			this->pushmod = true;
		}
		HX_STACK_LINE(14514)
		this->modified = true;
		HX_STACK_LINE(14515)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,inlined_pop,(void))

::nape::geom::RayResult ZNPList_RayResult_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","pop_unsafe",0x4b6a23eb,"zpp_nape.util.ZNPList_RayResult.pop_unsafe","zpp_nape/util/Lists.hx",14518,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14518)
	::nape::geom::RayResult ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14518)
	this->pop();
	HX_STACK_LINE(14518)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,pop_unsafe,return )

::nape::geom::RayResult ZNPList_RayResult_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_pop_unsafe",0x18511dff,"zpp_nape.util.ZNPList_RayResult.inlined_pop_unsafe","zpp_nape/util/Lists.hx",14522,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14531)
	::nape::geom::RayResult ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14532)
	this->pop();
	HX_STACK_LINE(14533)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,inlined_pop_unsafe,return )

Void ZNPList_RayResult_obj::remove( ::nape::geom::RayResult obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","remove",0x4666ec5b,"zpp_nape.util.ZNPList_RayResult.remove","zpp_nape/util/Lists.hx",14544,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(14544)
		::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14544)
		::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14544)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14544)
		while((true)){
			HX_STACK_LINE(14544)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(14544)
				break;
			}
			HX_STACK_LINE(14544)
			if (((cur->elt == obj))){
				HX_STACK_LINE(14544)
				{
					HX_STACK_LINE(14544)
					::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(14544)
					::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(14544)
					if (((pre == null()))){
						HX_STACK_LINE(14544)
						old = this->head;
						HX_STACK_LINE(14544)
						ret1 = old->next;
						HX_STACK_LINE(14544)
						this->head = ret1;
						HX_STACK_LINE(14544)
						if (((this->head == null()))){
							HX_STACK_LINE(14544)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(14544)
						old = pre->next;
						HX_STACK_LINE(14544)
						ret1 = old->next;
						HX_STACK_LINE(14544)
						pre->next = ret1;
						HX_STACK_LINE(14544)
						if (((ret1 == null()))){
							HX_STACK_LINE(14544)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(14544)
					{
						HX_STACK_LINE(14544)
						::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(14544)
						o->elt = null();
						HX_STACK_LINE(14544)
						o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
						HX_STACK_LINE(14544)
						::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
					}
					HX_STACK_LINE(14544)
					this->modified = true;
					HX_STACK_LINE(14544)
					(this->length)--;
					HX_STACK_LINE(14544)
					this->pushmod = true;
					HX_STACK_LINE(14544)
					ret1;
				}
				HX_STACK_LINE(14544)
				ret = true;
				HX_STACK_LINE(14544)
				break;
			}
			HX_STACK_LINE(14544)
			pre = cur;
			HX_STACK_LINE(14544)
			cur = cur->next;
		}
		HX_STACK_LINE(14544)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,remove,(void))

bool ZNPList_RayResult_obj::try_remove( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","try_remove",0x6294599f,"zpp_nape.util.ZNPList_RayResult.try_remove","zpp_nape/util/Lists.hx",14546,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14555)
	::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14556)
	::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14557)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14558)
	while((true)){
		HX_STACK_LINE(14558)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(14558)
			break;
		}
		HX_STACK_LINE(14559)
		if (((cur->elt == obj))){
			HX_STACK_LINE(14560)
			this->erase(pre);
			HX_STACK_LINE(14561)
			ret = true;
			HX_STACK_LINE(14562)
			break;
		}
		HX_STACK_LINE(14564)
		pre = cur;
		HX_STACK_LINE(14565)
		cur = cur->next;
	}
	HX_STACK_LINE(14567)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,try_remove,return )

Void ZNPList_RayResult_obj::inlined_remove( ::nape::geom::RayResult obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_remove",0xc21a4c6f,"zpp_nape.util.ZNPList_RayResult.inlined_remove","zpp_nape/util/Lists.hx",14580,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(14580)
		::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14580)
		::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14580)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(14580)
		while((true)){
			HX_STACK_LINE(14580)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(14580)
				break;
			}
			HX_STACK_LINE(14580)
			if (((cur->elt == obj))){
				HX_STACK_LINE(14580)
				{
					HX_STACK_LINE(14580)
					::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(14580)
					::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(14580)
					if (((pre == null()))){
						HX_STACK_LINE(14580)
						old = this->head;
						HX_STACK_LINE(14580)
						ret1 = old->next;
						HX_STACK_LINE(14580)
						this->head = ret1;
						HX_STACK_LINE(14580)
						if (((this->head == null()))){
							HX_STACK_LINE(14580)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(14580)
						old = pre->next;
						HX_STACK_LINE(14580)
						ret1 = old->next;
						HX_STACK_LINE(14580)
						pre->next = ret1;
						HX_STACK_LINE(14580)
						if (((ret1 == null()))){
							HX_STACK_LINE(14580)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(14580)
					{
						HX_STACK_LINE(14580)
						::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(14580)
						o->elt = null();
						HX_STACK_LINE(14580)
						o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
						HX_STACK_LINE(14580)
						::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
					}
					HX_STACK_LINE(14580)
					this->modified = true;
					HX_STACK_LINE(14580)
					(this->length)--;
					HX_STACK_LINE(14580)
					this->pushmod = true;
					HX_STACK_LINE(14580)
					ret1;
				}
				HX_STACK_LINE(14580)
				ret = true;
				HX_STACK_LINE(14580)
				break;
			}
			HX_STACK_LINE(14580)
			pre = cur;
			HX_STACK_LINE(14580)
			cur = cur->next;
		}
		HX_STACK_LINE(14580)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_remove,(void))

bool ZNPList_RayResult_obj::inlined_try_remove( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_try_remove",0x2f7b53b3,"zpp_nape.util.ZNPList_RayResult.inlined_try_remove","zpp_nape/util/Lists.hx",14584,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14593)
	::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(14594)
	::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14595)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14596)
	while((true)){
		HX_STACK_LINE(14596)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(14596)
			break;
		}
		HX_STACK_LINE(14597)
		if (((cur->elt == obj))){
			HX_STACK_LINE(14598)
			{
				HX_STACK_LINE(14598)
				::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(14598)
				::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(14598)
				if (((pre == null()))){
					HX_STACK_LINE(14598)
					old = this->head;
					HX_STACK_LINE(14598)
					ret1 = old->next;
					HX_STACK_LINE(14598)
					this->head = ret1;
					HX_STACK_LINE(14598)
					if (((this->head == null()))){
						HX_STACK_LINE(14598)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(14598)
					old = pre->next;
					HX_STACK_LINE(14598)
					ret1 = old->next;
					HX_STACK_LINE(14598)
					pre->next = ret1;
					HX_STACK_LINE(14598)
					if (((ret1 == null()))){
						HX_STACK_LINE(14598)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(14598)
				{
					HX_STACK_LINE(14598)
					::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(14598)
					o->elt = null();
					HX_STACK_LINE(14598)
					o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
					HX_STACK_LINE(14598)
					::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(14598)
				this->modified = true;
				HX_STACK_LINE(14598)
				(this->length)--;
				HX_STACK_LINE(14598)
				this->pushmod = true;
				HX_STACK_LINE(14598)
				ret1;
			}
			HX_STACK_LINE(14599)
			ret = true;
			HX_STACK_LINE(14600)
			break;
		}
		HX_STACK_LINE(14602)
		pre = cur;
		HX_STACK_LINE(14603)
		cur = cur->next;
	}
	HX_STACK_LINE(14605)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::erase( ::zpp_nape::util::ZNPNode_RayResult pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","erase",0x748e68af,"zpp_nape.util.ZNPList_RayResult.erase","zpp_nape/util/Lists.hx",14608,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(14608)
	::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(14608)
	::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14608)
	if (((pre == null()))){
		HX_STACK_LINE(14608)
		old = this->head;
		HX_STACK_LINE(14608)
		ret = old->next;
		HX_STACK_LINE(14608)
		this->head = ret;
		HX_STACK_LINE(14608)
		if (((this->head == null()))){
			HX_STACK_LINE(14608)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(14608)
		old = pre->next;
		HX_STACK_LINE(14608)
		ret = old->next;
		HX_STACK_LINE(14608)
		pre->next = ret;
		HX_STACK_LINE(14608)
		if (((ret == null()))){
			HX_STACK_LINE(14608)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(14608)
	{
		HX_STACK_LINE(14608)
		::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(14608)
		o->elt = null();
		HX_STACK_LINE(14608)
		o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
		HX_STACK_LINE(14608)
		::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
	}
	HX_STACK_LINE(14608)
	this->modified = true;
	HX_STACK_LINE(14608)
	(this->length)--;
	HX_STACK_LINE(14608)
	this->pushmod = true;
	HX_STACK_LINE(14608)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,erase,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::inlined_erase( ::zpp_nape::util::ZNPNode_RayResult pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_erase",0xb7b1a71b,"zpp_nape.util.ZNPList_RayResult.inlined_erase","zpp_nape/util/Lists.hx",14612,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(14621)
	::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(14622)
	::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14623)
	if (((pre == null()))){
		HX_STACK_LINE(14624)
		old = this->head;
		HX_STACK_LINE(14625)
		ret = old->next;
		HX_STACK_LINE(14626)
		this->head = ret;
		HX_STACK_LINE(14627)
		if (((this->head == null()))){
			HX_STACK_LINE(14627)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(14630)
		old = pre->next;
		HX_STACK_LINE(14631)
		ret = old->next;
		HX_STACK_LINE(14632)
		pre->next = ret;
		HX_STACK_LINE(14633)
		if (((ret == null()))){
			HX_STACK_LINE(14633)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(14636)
	{
		HX_STACK_LINE(14637)
		::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(14646)
		o->elt = null();
		HX_STACK_LINE(14647)
		o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
		HX_STACK_LINE(14648)
		::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
	}
	HX_STACK_LINE(14653)
	this->modified = true;
	HX_STACK_LINE(14654)
	(this->length)--;
	HX_STACK_LINE(14655)
	this->pushmod = true;
	HX_STACK_LINE(14656)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::splice( ::zpp_nape::util::ZNPNode_RayResult pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","splice",0x017cd593,"zpp_nape.util.ZNPList_RayResult.splice","zpp_nape/util/Lists.hx",14658,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(14659)
	while((true)){
		HX_STACK_LINE(14659)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14659)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(14659)
			break;
		}
		HX_STACK_LINE(14659)
		this->erase(pre);
	}
	HX_STACK_LINE(14660)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_RayResult_obj,splice,return )

Void ZNPList_RayResult_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","clear",0x49ccf156,"zpp_nape.util.ZNPList_RayResult.clear","zpp_nape/util/Lists.hx",14663,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14663)
		while((true)){
			HX_STACK_LINE(14663)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(14663)
				break;
			}
			HX_STACK_LINE(14663)
			::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14663)
			this->head = ret->next;
			HX_STACK_LINE(14663)
			{
				HX_STACK_LINE(14663)
				::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14663)
				o->elt = null();
				HX_STACK_LINE(14663)
				o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(14663)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14663)
			if (((this->head == null()))){
				HX_STACK_LINE(14663)
				this->pushmod = true;
			}
			HX_STACK_LINE(14663)
			this->modified = true;
			HX_STACK_LINE(14663)
			(this->length)--;
		}
		HX_STACK_LINE(14663)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,clear,(void))

Void ZNPList_RayResult_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_clear",0x8cf02fc2,"zpp_nape.util.ZNPList_RayResult.inlined_clear","zpp_nape/util/Lists.hx",14668,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14669)
		while((true)){
			HX_STACK_LINE(14669)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(14669)
				break;
			}
			HX_STACK_LINE(14669)
			::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(14669)
			this->head = ret->next;
			HX_STACK_LINE(14669)
			{
				HX_STACK_LINE(14669)
				::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(14669)
				o->elt = null();
				HX_STACK_LINE(14669)
				o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(14669)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(14669)
			if (((this->head == null()))){
				HX_STACK_LINE(14669)
				this->pushmod = true;
			}
			HX_STACK_LINE(14669)
			this->modified = true;
			HX_STACK_LINE(14669)
			(this->length)--;
		}
		HX_STACK_LINE(14670)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,inlined_clear,(void))

Void ZNPList_RayResult_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","reverse",0x7ba3fd2b,"zpp_nape.util.ZNPList_RayResult.reverse","zpp_nape/util/Lists.hx",14673,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14674)
		::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(14675)
		::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(14676)
		while((true)){
			HX_STACK_LINE(14676)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(14676)
				break;
			}
			HX_STACK_LINE(14677)
			::zpp_nape::util::ZNPNode_RayResult nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(14678)
			cur->next = pre;
			HX_STACK_LINE(14679)
			this->head = cur;
			HX_STACK_LINE(14680)
			pre = cur;
			HX_STACK_LINE(14681)
			cur = nx;
		}
		HX_STACK_LINE(14683)
		this->modified = true;
		HX_STACK_LINE(14684)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,reverse,(void))

bool ZNPList_RayResult_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","empty",0x714bba56,"zpp_nape.util.ZNPList_RayResult.empty","zpp_nape/util/Lists.hx",14689,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14689)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,empty,return )

int ZNPList_RayResult_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","size",0xc604ed18,"zpp_nape.util.ZNPList_RayResult.size","zpp_nape/util/Lists.hx",14694,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14694)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,size,return )

bool ZNPList_RayResult_obj::has( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","has",0xa7500ae3,"zpp_nape.util.ZNPList_RayResult.has","zpp_nape/util/Lists.hx",14697,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14697)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14697)
	{
		HX_STACK_LINE(14697)
		ret = false;
		HX_STACK_LINE(14697)
		{
			HX_STACK_LINE(14697)
			::zpp_nape::util::ZNPNode_RayResult cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14697)
			while((true)){
				HX_STACK_LINE(14697)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(14697)
					break;
				}
				HX_STACK_LINE(14697)
				::nape::geom::RayResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(14697)
				if (((npite == obj))){
					HX_STACK_LINE(14697)
					ret = true;
					HX_STACK_LINE(14697)
					break;
				}
				HX_STACK_LINE(14697)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(14697)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,has,return )

bool ZNPList_RayResult_obj::inlined_has( ::nape::geom::RayResult obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","inlined_has",0xfaa8964f,"zpp_nape.util.ZNPList_RayResult.inlined_has","zpp_nape/util/Lists.hx",14701,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(14710)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14711)
	{
		HX_STACK_LINE(14712)
		ret = false;
		HX_STACK_LINE(14713)
		{
			HX_STACK_LINE(14714)
			::zpp_nape::util::ZNPNode_RayResult cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(14715)
			while((true)){
				HX_STACK_LINE(14715)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(14715)
					break;
				}
				HX_STACK_LINE(14716)
				::nape::geom::RayResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(14718)
				if (((npite == obj))){
					HX_STACK_LINE(14719)
					ret = true;
					HX_STACK_LINE(14720)
					break;
				}
				HX_STACK_LINE(14723)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(14727)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_has,return )

::nape::geom::RayResult ZNPList_RayResult_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","front",0x07ff9872,"zpp_nape.util.ZNPList_RayResult.front","zpp_nape/util/Lists.hx",14732,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14732)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,front,return )

::nape::geom::RayResult ZNPList_RayResult_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","back",0xbac2267e,"zpp_nape.util.ZNPList_RayResult.back","zpp_nape/util/Lists.hx",14734,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14735)
	::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14736)
	::zpp_nape::util::ZNPNode_RayResult cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(14737)
	while((true)){
		HX_STACK_LINE(14737)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(14737)
			break;
		}
		HX_STACK_LINE(14738)
		ret = cur;
		HX_STACK_LINE(14739)
		cur = cur->next;
	}
	HX_STACK_LINE(14741)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,back,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","iterator_at",0xff47866d,"zpp_nape.util.ZNPList_RayResult.iterator_at","zpp_nape/util/Lists.hx",14743,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(14752)
	::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(14753)
	while((true)){
		HX_STACK_LINE(14753)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14753)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(14753)
			break;
		}
		HX_STACK_LINE(14753)
		ret = ret->next;
	}
	HX_STACK_LINE(14754)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,iterator_at,return )

::nape::geom::RayResult ZNPList_RayResult_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_RayResult","at",0x45a10d8a,"zpp_nape.util.ZNPList_RayResult.at","zpp_nape/util/Lists.hx",14756,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(14765)
	::zpp_nape::util::ZNPNode_RayResult it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(14766)
	if (((it != null()))){
		HX_STACK_LINE(14766)
		return it->elt;
	}
	else{
		HX_STACK_LINE(14766)
		return null();
	}
	HX_STACK_LINE(14766)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,at,return )


ZNPList_RayResult_obj::ZNPList_RayResult_obj()
{
}

void ZNPList_RayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_RayResult);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_RayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_RayResult_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_RayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_RayResult >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_RayResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("head"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZNPNode_RayResult*/ ,(int)offsetof(ZNPList_RayResult_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_RayResult_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_RayResult_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_RayResult_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("head"),
	HX_CSTRING("begin"),
	HX_CSTRING("modified"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("length"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("add"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("insert"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("splice"),
	HX_CSTRING("clear"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("reverse"),
	HX_CSTRING("empty"),
	HX_CSTRING("size"),
	HX_CSTRING("has"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("front"),
	HX_CSTRING("back"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("at"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_RayResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_RayResult_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_RayResult_obj::__mClass;

void ZNPList_RayResult_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_RayResult"), hx::TCanCast< ZNPList_RayResult_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_RayResult_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
