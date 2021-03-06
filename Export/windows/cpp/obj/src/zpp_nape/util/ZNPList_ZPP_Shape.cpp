#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Shape_obj::__construct()
{
HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","new",0x046456be,"zpp_nape.util.ZNPList_ZPP_Shape.new","zpp_nape/util/Lists.hx",1009,0x9f4e6754)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1019)
	this->length = (int)0;
	HX_STACK_LINE(1018)
	this->pushmod = false;
	HX_STACK_LINE(1017)
	this->modified = false;
	HX_STACK_LINE(1010)
	this->head = null();
}
;
	return null();
}

//ZNPList_ZPP_Shape_obj::~ZNPList_ZPP_Shape_obj() { }

Dynamic ZNPList_ZPP_Shape_obj::__CreateEmpty() { return  new ZNPList_ZPP_Shape_obj; }
hx::ObjectPtr< ZNPList_ZPP_Shape_obj > ZNPList_ZPP_Shape_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Shape_obj > result = new ZNPList_ZPP_Shape_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Shape_obj > result = new ZNPList_ZPP_Shape_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::begin( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","begin",0x3e5b4407,"zpp_nape.util.ZNPList_ZPP_Shape.begin","zpp_nape/util/Lists.hx",1015,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1015)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,begin,return )

Void ZNPList_ZPP_Shape_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Shape i){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","setbegin",0xd5328829,"zpp_nape.util.ZNPList_ZPP_Shape.setbegin","zpp_nape/util/Lists.hx",1022,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(1023)
		this->head = i;
		HX_STACK_LINE(1024)
		this->modified = true;
		HX_STACK_LINE(1025)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,setbegin,(void))

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::add( ::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","add",0x045a787f,"zpp_nape.util.ZNPList_ZPP_Shape.add","zpp_nape/util/Lists.hx",1028,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1028)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1028)
	{
		HX_STACK_LINE(1028)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1028)
		{
			HX_STACK_LINE(1028)
			if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
				HX_STACK_LINE(1028)
				::zpp_nape::util::ZNPNode_ZPP_Shape _g = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1028)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1028)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1028)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1028)
				ret->next = null();
			}
			HX_STACK_LINE(1028)
			Dynamic();
		}
		HX_STACK_LINE(1028)
		ret->elt = o;
		HX_STACK_LINE(1028)
		temp = ret;
	}
	HX_STACK_LINE(1028)
	temp->next = this->head;
	HX_STACK_LINE(1028)
	this->head = temp;
	HX_STACK_LINE(1028)
	this->modified = true;
	HX_STACK_LINE(1028)
	(this->length)++;
	HX_STACK_LINE(1028)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,add,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_add( ::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_add",0x67d960eb,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_add","zpp_nape/util/Lists.hx",1032,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1041)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1041)
	{
		HX_STACK_LINE(1042)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1043)
		{
			HX_STACK_LINE(1044)
			if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
				HX_STACK_LINE(1045)
				::zpp_nape::util::ZNPNode_ZPP_Shape _g = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1045)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1051)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1052)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1053)
				ret->next = null();
			}
			HX_STACK_LINE(1058)
			Dynamic();
		}
		HX_STACK_LINE(1060)
		ret->elt = o;
		HX_STACK_LINE(1061)
		temp = ret;
	}
	HX_STACK_LINE(1063)
	temp->next = this->head;
	HX_STACK_LINE(1064)
	this->head = temp;
	HX_STACK_LINE(1065)
	this->modified = true;
	HX_STACK_LINE(1066)
	(this->length)++;
	HX_STACK_LINE(1067)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_add,return )

Void ZNPList_ZPP_Shape_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Shape x){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","addAll",0x55a451e2,"zpp_nape.util.ZNPList_ZPP_Shape.addAll","zpp_nape/util/Lists.hx",1078,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1079)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1080)
		while((true)){
			HX_STACK_LINE(1080)
			if ((!(((cx_ite != null()))))){
				HX_STACK_LINE(1080)
				break;
			}
			HX_STACK_LINE(1081)
			::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1082)
			this->add(i);
			HX_STACK_LINE(1083)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,addAll,(void))

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Shape cur,::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","insert",0x54868b9b,"zpp_nape.util.ZNPList_ZPP_Shape.insert","zpp_nape/util/Lists.hx",1088,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1088)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1088)
	{
		HX_STACK_LINE(1088)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1088)
		{
			HX_STACK_LINE(1088)
			if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
				HX_STACK_LINE(1088)
				::zpp_nape::util::ZNPNode_ZPP_Shape _g = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1088)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1088)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1088)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1088)
				ret->next = null();
			}
			HX_STACK_LINE(1088)
			Dynamic();
		}
		HX_STACK_LINE(1088)
		ret->elt = o;
		HX_STACK_LINE(1088)
		temp = ret;
	}
	HX_STACK_LINE(1088)
	if (((cur == null()))){
		HX_STACK_LINE(1088)
		temp->next = this->head;
		HX_STACK_LINE(1088)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1088)
		temp->next = cur->next;
		HX_STACK_LINE(1088)
		cur->next = temp;
	}
	HX_STACK_LINE(1088)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1088)
	this->pushmod = _g1;
	HX_STACK_LINE(1088)
	(this->length)++;
	HX_STACK_LINE(1088)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,insert,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Shape cur,::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_insert",0x54abaeaf,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_insert","zpp_nape/util/Lists.hx",1092,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cur,"cur")
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(1101)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1101)
	{
		HX_STACK_LINE(1102)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1103)
		{
			HX_STACK_LINE(1104)
			if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
				HX_STACK_LINE(1105)
				::zpp_nape::util::ZNPNode_ZPP_Shape _g = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1105)
				ret = _g;
			}
			else{
				HX_STACK_LINE(1111)
				ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1112)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
				HX_STACK_LINE(1113)
				ret->next = null();
			}
			HX_STACK_LINE(1118)
			Dynamic();
		}
		HX_STACK_LINE(1120)
		ret->elt = o;
		HX_STACK_LINE(1121)
		temp = ret;
	}
	HX_STACK_LINE(1123)
	if (((cur == null()))){
		HX_STACK_LINE(1124)
		temp->next = this->head;
		HX_STACK_LINE(1125)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1128)
		temp->next = cur->next;
		HX_STACK_LINE(1129)
		cur->next = temp;
	}
	HX_STACK_LINE(1131)
	bool _g1 = this->modified = true;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1131)
	this->pushmod = _g1;
	HX_STACK_LINE(1132)
	(this->length)++;
	HX_STACK_LINE(1133)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,inlined_insert,return )

Void ZNPList_ZPP_Shape_obj::pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","pop",0x0465e3ef,"zpp_nape.util.ZNPList_ZPP_Shape.pop","zpp_nape/util/Lists.hx",1136,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1136)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1136)
		this->head = ret->next;
		HX_STACK_LINE(1136)
		{
			HX_STACK_LINE(1136)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1136)
			o->elt = null();
			HX_STACK_LINE(1136)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
			HX_STACK_LINE(1136)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1136)
		if (((this->head == null()))){
			HX_STACK_LINE(1136)
			this->pushmod = true;
		}
		HX_STACK_LINE(1136)
		this->modified = true;
		HX_STACK_LINE(1136)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,pop,(void))

Void ZNPList_ZPP_Shape_obj::inlined_pop( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_pop",0x67e4cc5b,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_pop","zpp_nape/util/Lists.hx",1140,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1149)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1150)
		this->head = ret->next;
		HX_STACK_LINE(1152)
		{
			HX_STACK_LINE(1153)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1162)
			o->elt = null();
			HX_STACK_LINE(1163)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
			HX_STACK_LINE(1164)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1169)
		if (((this->head == null()))){
			HX_STACK_LINE(1169)
			this->pushmod = true;
		}
		HX_STACK_LINE(1170)
		this->modified = true;
		HX_STACK_LINE(1171)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_pop,(void))

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","pop_unsafe",0x7c1e9db6,"zpp_nape.util.ZNPList_ZPP_Shape.pop_unsafe","zpp_nape/util/Lists.hx",1174,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1174)
	::zpp_nape::shape::ZPP_Shape ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1174)
	this->pop();
	HX_STACK_LINE(1174)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,pop_unsafe,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_pop_unsafe( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_pop_unsafe",0x7d14daca,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_pop_unsafe","zpp_nape/util/Lists.hx",1178,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1187)
	::zpp_nape::shape::ZPP_Shape ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1188)
	this->pop();
	HX_STACK_LINE(1189)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_pop_unsafe,return )

Void ZNPList_ZPP_Shape_obj::remove( ::zpp_nape::shape::ZPP_Shape obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","remove",0xbb31e4a6,"zpp_nape.util.ZNPList_ZPP_Shape.remove","zpp_nape/util/Lists.hx",1200,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1200)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1200)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1200)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1200)
		while((true)){
			HX_STACK_LINE(1200)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(1200)
				break;
			}
			HX_STACK_LINE(1200)
			if (((cur->elt == obj))){
				HX_STACK_LINE(1200)
				{
					HX_STACK_LINE(1200)
					::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1200)
					::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1200)
					if (((pre == null()))){
						HX_STACK_LINE(1200)
						old = this->head;
						HX_STACK_LINE(1200)
						ret1 = old->next;
						HX_STACK_LINE(1200)
						this->head = ret1;
						HX_STACK_LINE(1200)
						if (((this->head == null()))){
							HX_STACK_LINE(1200)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1200)
						old = pre->next;
						HX_STACK_LINE(1200)
						ret1 = old->next;
						HX_STACK_LINE(1200)
						pre->next = ret1;
						HX_STACK_LINE(1200)
						if (((ret1 == null()))){
							HX_STACK_LINE(1200)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(1200)
					{
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1200)
						o->elt = null();
						HX_STACK_LINE(1200)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
						HX_STACK_LINE(1200)
						::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1200)
					this->modified = true;
					HX_STACK_LINE(1200)
					(this->length)--;
					HX_STACK_LINE(1200)
					this->pushmod = true;
					HX_STACK_LINE(1200)
					ret1;
				}
				HX_STACK_LINE(1200)
				ret = true;
				HX_STACK_LINE(1200)
				break;
			}
			HX_STACK_LINE(1200)
			pre = cur;
			HX_STACK_LINE(1200)
			cur = cur->next;
		}
		HX_STACK_LINE(1200)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,remove,(void))

bool ZNPList_ZPP_Shape_obj::try_remove( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","try_remove",0x9348d36a,"zpp_nape.util.ZNPList_ZPP_Shape.try_remove","zpp_nape/util/Lists.hx",1202,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1211)
	::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1212)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1213)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1214)
	while((true)){
		HX_STACK_LINE(1214)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(1214)
			break;
		}
		HX_STACK_LINE(1215)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1216)
			this->erase(pre);
			HX_STACK_LINE(1217)
			ret = true;
			HX_STACK_LINE(1218)
			break;
		}
		HX_STACK_LINE(1220)
		pre = cur;
		HX_STACK_LINE(1221)
		cur = cur->next;
	}
	HX_STACK_LINE(1223)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,try_remove,return )

Void ZNPList_ZPP_Shape_obj::inlined_remove( ::zpp_nape::shape::ZPP_Shape obj){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_remove",0xbb5707ba,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_remove","zpp_nape/util/Lists.hx",1236,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1236)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1236)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1236)
		bool ret = false;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1236)
		while((true)){
			HX_STACK_LINE(1236)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(1236)
				break;
			}
			HX_STACK_LINE(1236)
			if (((cur->elt == obj))){
				HX_STACK_LINE(1236)
				{
					HX_STACK_LINE(1236)
					::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
					HX_STACK_LINE(1236)
					::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1236)
					if (((pre == null()))){
						HX_STACK_LINE(1236)
						old = this->head;
						HX_STACK_LINE(1236)
						ret1 = old->next;
						HX_STACK_LINE(1236)
						this->head = ret1;
						HX_STACK_LINE(1236)
						if (((this->head == null()))){
							HX_STACK_LINE(1236)
							this->pushmod = true;
						}
					}
					else{
						HX_STACK_LINE(1236)
						old = pre->next;
						HX_STACK_LINE(1236)
						ret1 = old->next;
						HX_STACK_LINE(1236)
						pre->next = ret1;
						HX_STACK_LINE(1236)
						if (((ret1 == null()))){
							HX_STACK_LINE(1236)
							this->pushmod = true;
						}
					}
					HX_STACK_LINE(1236)
					{
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1236)
						o->elt = null();
						HX_STACK_LINE(1236)
						o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
						HX_STACK_LINE(1236)
						::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
					}
					HX_STACK_LINE(1236)
					this->modified = true;
					HX_STACK_LINE(1236)
					(this->length)--;
					HX_STACK_LINE(1236)
					this->pushmod = true;
					HX_STACK_LINE(1236)
					ret1;
				}
				HX_STACK_LINE(1236)
				ret = true;
				HX_STACK_LINE(1236)
				break;
			}
			HX_STACK_LINE(1236)
			pre = cur;
			HX_STACK_LINE(1236)
			cur = cur->next;
		}
		HX_STACK_LINE(1236)
		ret;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_remove,(void))

bool ZNPList_ZPP_Shape_obj::inlined_try_remove( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_try_remove",0x943f107e,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_try_remove","zpp_nape/util/Lists.hx",1240,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1249)
	::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1250)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1251)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1252)
	while((true)){
		HX_STACK_LINE(1252)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(1252)
			break;
		}
		HX_STACK_LINE(1253)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1254)
			{
				HX_STACK_LINE(1254)
				::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1254)
				::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1254)
				if (((pre == null()))){
					HX_STACK_LINE(1254)
					old = this->head;
					HX_STACK_LINE(1254)
					ret1 = old->next;
					HX_STACK_LINE(1254)
					this->head = ret1;
					HX_STACK_LINE(1254)
					if (((this->head == null()))){
						HX_STACK_LINE(1254)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1254)
					old = pre->next;
					HX_STACK_LINE(1254)
					ret1 = old->next;
					HX_STACK_LINE(1254)
					pre->next = ret1;
					HX_STACK_LINE(1254)
					if (((ret1 == null()))){
						HX_STACK_LINE(1254)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1254)
				{
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1254)
					o->elt = null();
					HX_STACK_LINE(1254)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
					HX_STACK_LINE(1254)
					::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1254)
				this->modified = true;
				HX_STACK_LINE(1254)
				(this->length)--;
				HX_STACK_LINE(1254)
				this->pushmod = true;
				HX_STACK_LINE(1254)
				ret1;
			}
			HX_STACK_LINE(1255)
			ret = true;
			HX_STACK_LINE(1256)
			break;
		}
		HX_STACK_LINE(1258)
		pre = cur;
		HX_STACK_LINE(1259)
		cur = cur->next;
	}
	HX_STACK_LINE(1261)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_try_remove,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Shape pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","erase",0x012242c4,"zpp_nape.util.ZNPList_ZPP_Shape.erase","zpp_nape/util/Lists.hx",1264,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(1264)
	::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1264)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1264)
	if (((pre == null()))){
		HX_STACK_LINE(1264)
		old = this->head;
		HX_STACK_LINE(1264)
		ret = old->next;
		HX_STACK_LINE(1264)
		this->head = ret;
		HX_STACK_LINE(1264)
		if (((this->head == null()))){
			HX_STACK_LINE(1264)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1264)
		old = pre->next;
		HX_STACK_LINE(1264)
		ret = old->next;
		HX_STACK_LINE(1264)
		pre->next = ret;
		HX_STACK_LINE(1264)
		if (((ret == null()))){
			HX_STACK_LINE(1264)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1264)
	{
		HX_STACK_LINE(1264)
		::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1264)
		o->elt = null();
		HX_STACK_LINE(1264)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
		HX_STACK_LINE(1264)
		::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1264)
	this->modified = true;
	HX_STACK_LINE(1264)
	(this->length)--;
	HX_STACK_LINE(1264)
	this->pushmod = true;
	HX_STACK_LINE(1264)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,erase,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Shape pre){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_erase",0x707d1e30,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_erase","zpp_nape/util/Lists.hx",1268,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_LINE(1277)
	::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1278)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1279)
	if (((pre == null()))){
		HX_STACK_LINE(1280)
		old = this->head;
		HX_STACK_LINE(1281)
		ret = old->next;
		HX_STACK_LINE(1282)
		this->head = ret;
		HX_STACK_LINE(1283)
		if (((this->head == null()))){
			HX_STACK_LINE(1283)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1286)
		old = pre->next;
		HX_STACK_LINE(1287)
		ret = old->next;
		HX_STACK_LINE(1288)
		pre->next = ret;
		HX_STACK_LINE(1289)
		if (((ret == null()))){
			HX_STACK_LINE(1289)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1292)
	{
		HX_STACK_LINE(1293)
		::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1302)
		o->elt = null();
		HX_STACK_LINE(1303)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
		HX_STACK_LINE(1304)
		::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1309)
	this->modified = true;
	HX_STACK_LINE(1310)
	(this->length)--;
	HX_STACK_LINE(1311)
	this->pushmod = true;
	HX_STACK_LINE(1312)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Shape pre,int n){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","splice",0x7647cdde,"zpp_nape.util.ZNPList_ZPP_Shape.splice","zpp_nape/util/Lists.hx",1314,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pre,"pre")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(1315)
	while((true)){
		HX_STACK_LINE(1315)
		int _g = (n)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1315)
		if ((!(((  (((_g > (int)0))) ? bool((pre->next != null())) : bool(false) ))))){
			HX_STACK_LINE(1315)
			break;
		}
		HX_STACK_LINE(1315)
		this->erase(pre);
	}
	HX_STACK_LINE(1316)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,splice,return )

Void ZNPList_ZPP_Shape_obj::clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","clear",0xd660cb6b,"zpp_nape.util.ZNPList_ZPP_Shape.clear","zpp_nape/util/Lists.hx",1319,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1319)
		while((true)){
			HX_STACK_LINE(1319)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(1319)
				break;
			}
			HX_STACK_LINE(1319)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1319)
			this->head = ret->next;
			HX_STACK_LINE(1319)
			{
				HX_STACK_LINE(1319)
				::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1319)
				o->elt = null();
				HX_STACK_LINE(1319)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1319)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1319)
			if (((this->head == null()))){
				HX_STACK_LINE(1319)
				this->pushmod = true;
			}
			HX_STACK_LINE(1319)
			this->modified = true;
			HX_STACK_LINE(1319)
			(this->length)--;
		}
		HX_STACK_LINE(1319)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,clear,(void))

Void ZNPList_ZPP_Shape_obj::inlined_clear( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_clear",0x45bba6d7,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_clear","zpp_nape/util/Lists.hx",1324,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1325)
		while((true)){
			HX_STACK_LINE(1325)
			if ((!((!(((this->head == null()))))))){
				HX_STACK_LINE(1325)
				break;
			}
			HX_STACK_LINE(1325)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1325)
			this->head = ret->next;
			HX_STACK_LINE(1325)
			{
				HX_STACK_LINE(1325)
				::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1325)
				o->elt = null();
				HX_STACK_LINE(1325)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1325)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1325)
			if (((this->head == null()))){
				HX_STACK_LINE(1325)
				this->pushmod = true;
			}
			HX_STACK_LINE(1325)
			this->modified = true;
			HX_STACK_LINE(1325)
			(this->length)--;
		}
		HX_STACK_LINE(1326)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_clear,(void))

Void ZNPList_ZPP_Shape_obj::reverse( ){
{
		HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","reverse",0x38724680,"zpp_nape.util.ZNPList_ZPP_Shape.reverse","zpp_nape/util/Lists.hx",1329,0x9f4e6754)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1330)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1331)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1332)
		while((true)){
			HX_STACK_LINE(1332)
			if ((!(((cur != null()))))){
				HX_STACK_LINE(1332)
				break;
			}
			HX_STACK_LINE(1333)
			::zpp_nape::util::ZNPNode_ZPP_Shape nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1334)
			cur->next = pre;
			HX_STACK_LINE(1335)
			this->head = cur;
			HX_STACK_LINE(1336)
			pre = cur;
			HX_STACK_LINE(1337)
			cur = nx;
		}
		HX_STACK_LINE(1339)
		this->modified = true;
		HX_STACK_LINE(1340)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,reverse,(void))

bool ZNPList_ZPP_Shape_obj::empty( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","empty",0xfddf946b,"zpp_nape.util.ZNPList_ZPP_Shape.empty","zpp_nape/util/Lists.hx",1345,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1345)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,empty,return )

int ZNPList_ZPP_Shape_obj::size( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","size",0xd6b8aca3,"zpp_nape.util.ZNPList_ZPP_Shape.size","zpp_nape/util/Lists.hx",1350,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1350)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,size,return )

bool ZNPList_ZPP_Shape_obj::has( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","has",0x045fc5b8,"zpp_nape.util.ZNPList_ZPP_Shape.has","zpp_nape/util/Lists.hx",1353,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1353)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1353)
	{
		HX_STACK_LINE(1353)
		ret = false;
		HX_STACK_LINE(1353)
		{
			HX_STACK_LINE(1353)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1353)
			while((true)){
				HX_STACK_LINE(1353)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1353)
					break;
				}
				HX_STACK_LINE(1353)
				::zpp_nape::shape::ZPP_Shape npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1353)
				if (((npite == obj))){
					HX_STACK_LINE(1353)
					ret = true;
					HX_STACK_LINE(1353)
					break;
				}
				HX_STACK_LINE(1353)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1353)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,has,return )

bool ZNPList_ZPP_Shape_obj::inlined_has( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","inlined_has",0x67deae24,"zpp_nape.util.ZNPList_ZPP_Shape.inlined_has","zpp_nape/util/Lists.hx",1357,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(1366)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1367)
	{
		HX_STACK_LINE(1368)
		ret = false;
		HX_STACK_LINE(1369)
		{
			HX_STACK_LINE(1370)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1371)
			while((true)){
				HX_STACK_LINE(1371)
				if ((!(((cx_ite != null()))))){
					HX_STACK_LINE(1371)
					break;
				}
				HX_STACK_LINE(1372)
				::zpp_nape::shape::ZPP_Shape npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1374)
				if (((npite == obj))){
					HX_STACK_LINE(1375)
					ret = true;
					HX_STACK_LINE(1376)
					break;
				}
				HX_STACK_LINE(1379)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1383)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_has,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::front( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","front",0x94937287,"zpp_nape.util.ZNPList_ZPP_Shape.front","zpp_nape/util/Lists.hx",1388,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1388)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,front,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::back( ){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","back",0xcb75e609,"zpp_nape.util.ZNPList_ZPP_Shape.back","zpp_nape/util/Lists.hx",1390,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1391)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1392)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1393)
	while((true)){
		HX_STACK_LINE(1393)
		if ((!(((cur != null()))))){
			HX_STACK_LINE(1393)
			break;
		}
		HX_STACK_LINE(1394)
		ret = cur;
		HX_STACK_LINE(1395)
		cur = cur->next;
	}
	HX_STACK_LINE(1397)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,back,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::iterator_at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","iterator_at",0x6c7d9e42,"zpp_nape.util.ZNPList_ZPP_Shape.iterator_at","zpp_nape/util/Lists.hx",1399,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1408)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1409)
	while((true)){
		HX_STACK_LINE(1409)
		int _g = (ind)--;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1409)
		if ((!(((  (((_g > (int)0))) ? bool((ret != null())) : bool(false) ))))){
			HX_STACK_LINE(1409)
			break;
		}
		HX_STACK_LINE(1409)
		ret = ret->next;
	}
	HX_STACK_LINE(1410)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,iterator_at,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::at( int ind){
	HX_STACK_FRAME("zpp_nape.util.ZNPList_ZPP_Shape","at",0x24c14455,"zpp_nape.util.ZNPList_ZPP_Shape.at","zpp_nape/util/Lists.hx",1412,0x9f4e6754)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ind,"ind")
	HX_STACK_LINE(1421)
	::zpp_nape::util::ZNPNode_ZPP_Shape it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1422)
	if (((it != null()))){
		HX_STACK_LINE(1422)
		return it->elt;
	}
	else{
		HX_STACK_LINE(1422)
		return null();
	}
	HX_STACK_LINE(1422)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,at,return )


ZNPList_ZPP_Shape_obj::ZNPList_ZPP_Shape_obj()
{
}

void ZNPList_ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Shape);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(length,"length");
}

Dynamic ZNPList_ZPP_Shape_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Shape >(); return inValue; }
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

void ZNPList_ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::zpp_nape::util::ZNPNode_ZPP_Shape*/ ,(int)offsetof(ZNPList_ZPP_Shape_obj,head),HX_CSTRING("head")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Shape_obj,modified),HX_CSTRING("modified")},
	{hx::fsBool,(int)offsetof(ZNPList_ZPP_Shape_obj,pushmod),HX_CSTRING("pushmod")},
	{hx::fsInt,(int)offsetof(ZNPList_ZPP_Shape_obj,length),HX_CSTRING("length")},
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Shape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Shape_obj::__mClass,"__mClass");
};

#endif

Class ZNPList_ZPP_Shape_obj::__mClass;

void ZNPList_ZPP_Shape_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Shape"), hx::TCanCast< ZNPList_ZPP_Shape_obj> ,sStaticFields,sMemberFields,
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

void ZNPList_ZPP_Shape_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
