#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_kriss_Carte
#include <kriss/Carte.h>
#endif
#ifndef INCLUDED_kriss_Case
#include <kriss/Case.h>
#endif
#ifndef INCLUDED_kriss_Faction
#include <kriss/Faction.h>
#endif
#ifndef INCLUDED_kriss_Krissmoon
#include <kriss/Krissmoon.h>
#endif
#ifndef INCLUDED_kriss_Region
#include <kriss/Region.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace kriss{

Void Region_obj::__construct(::kriss::Case h,::kriss::Faction nouvelleFaction)
{
HX_STACK_FRAME("kriss.Region","new",0x31d25af2,"kriss.Region.new","kriss/Region.hx",14,0x580c409d)
HX_STACK_THIS(this)
HX_STACK_ARG(h,"h")
HX_STACK_ARG(nouvelleFaction,"nouvelleFaction")
{
	HX_STACK_LINE(21)
	this->regionEnnemie = Array_obj< ::String >::__new();
	HX_STACK_LINE(20)
	this->regionAllie = Array_obj< ::String >::__new();
	HX_STACK_LINE(27)
	this->hexa = h;
	HX_STACK_LINE(28)
	this->faction = nouvelleFaction;
	HX_STACK_LINE(34)
	this->hexa->updateHexa(this->faction->couleur);
	HX_STACK_LINE(39)
	this->faction->ajoutTerritoire(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(44)
	::haxe::ds::StringMap _g = this->voisins();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	this->listeVoisins = _g;
}
;
	return null();
}

//Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new(::kriss::Case h,::kriss::Faction nouvelleFaction)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(h,nouvelleFaction);
	return result;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Region_obj::changement_Faction( ::kriss::Faction nouvelleFaction){
{
		HX_STACK_FRAME("kriss.Region","changement_Faction",0x1c2544b9,"kriss.Region.changement_Faction","kriss/Region.hx",51,0x580c409d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nouvelleFaction,"nouvelleFaction")
		HX_STACK_LINE(54)
		this->faction->retraitTerritoire(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(56)
		this->faction = nouvelleFaction;
		HX_STACK_LINE(57)
		this->hexa->updateHexa(this->faction->couleur);
		HX_STACK_LINE(60)
		this->faction->ajoutTerritoire(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(62)
		this->typeVoisins();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,changement_Faction,(void))

::haxe::ds::StringMap Region_obj::voisins( ){
	HX_STACK_FRAME("kriss.Region","voisins",0x72f484fd,"kriss.Region.voisins","kriss/Region.hx",66,0x580c409d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::haxe::ds::StringMap result = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(69)
	int p_x = this->hexa->ligne;		HX_STACK_VAR(p_x,"p_x");
	HX_STACK_LINE(69)
	int p_y = this->hexa->colonne;		HX_STACK_VAR(p_y,"p_y");
	HX_STACK_LINE(70)
	int q;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(71)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(72)
	if (((this->hexa->colonne == (int)8))){
	}
	HX_STACK_LINE(77)
	if (((hx::Mod(this->hexa->ligne,(int)2) == (int)0))){
		HX_STACK_LINE(79)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		while((true)){
			HX_STACK_LINE(79)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(79)
				break;
			}
			HX_STACK_LINE(79)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(80)
			switch( (int)(i)){
				case (int)0: {
					HX_STACK_LINE(82)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(83)
					r = this->hexa->ligne;
					HX_STACK_LINE(85)
					if (((q >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",85,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(85)
						result->set(HX_CSTRING("O"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(88)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(89)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(90)
					if (((bool((q >= (int)0)) && bool((r >= (int)0))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",91,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(91)
						result->set(HX_CSTRING("NO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(95)
					q = this->hexa->colonne;
					HX_STACK_LINE(96)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(97)
					if (((r >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",98,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(98)
						result->set(HX_CSTRING("NE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(103)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(104)
					r = this->hexa->ligne;
					HX_STACK_LINE(106)
					if (((q < (int)12))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",107,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(107)
						result->set(HX_CSTRING("E"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(113)
					q = this->hexa->colonne;
					HX_STACK_LINE(114)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(115)
					if (((r < (int)12))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",116,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(116)
						result->set(HX_CSTRING("SE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(121)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(122)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(123)
					if (((bool((q >= (int)0)) && bool((r < (int)12))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",124,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(124)
						result->set(HX_CSTRING("SO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
			}
		}
	}
	else{
		HX_STACK_LINE(131)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			int j = (_g)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(132)
			switch( (int)(j)){
				case (int)0: {
					HX_STACK_LINE(134)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(135)
					r = this->hexa->ligne;
					HX_STACK_LINE(136)
					if (((q >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",137,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(137)
						result->set(HX_CSTRING("O"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(141)
					q = this->hexa->colonne;
					HX_STACK_LINE(142)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(143)
					if (((r >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",144,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(144)
						result->set(HX_CSTRING("NO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(148)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(149)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(150)
					if (((bool((r >= (int)0)) && bool((q < (int)12))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",151,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(151)
						result->set(HX_CSTRING("NE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(156)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(157)
					r = this->hexa->ligne;
					HX_STACK_LINE(158)
					if (((q < (int)12))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",159,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(159)
						result->set(HX_CSTRING("E"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(164)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(165)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(166)
					if (((bool((r < (int)12)) && bool((q < (int)12))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",167,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(167)
						result->set(HX_CSTRING("SE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(172)
					q = this->hexa->colonne;
					HX_STACK_LINE(173)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(174)
					if (((r < (int)12))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","kriss/Region.hx",175,0x580c409d)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(175)
						result->set(HX_CSTRING("SO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(182)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,voisins,return )

Void Region_obj::getVoisins( ){
{
		HX_STACK_FRAME("kriss.Region","getVoisins",0x87d59b23,"kriss.Region.getVoisins","kriss/Region.hx",185,0x580c409d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getVoisins,(void))

::kriss::Faction Region_obj::getFaction( ){
	HX_STACK_FRAME("kriss.Region","getFaction",0xe1c0de54,"kriss.Region.getFaction","kriss/Region.hx",191,0x580c409d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(191)
	return this->faction;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getFaction,return )

Void Region_obj::typeVoisins( ){
{
		HX_STACK_FRAME("kriss.Region","typeVoisins",0x8d801663,"kriss.Region.typeVoisins","kriss/Region.hx",194,0x580c409d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(195)
		Dynamic iter = this->listeVoisins->keys();		HX_STACK_VAR(iter,"iter");
		HX_STACK_LINE(196)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(iter);  __it->hasNext(); ){
			::String voisin = __it->next();
			{
				HX_STACK_LINE(197)
				Array< ::Dynamic > reg = ::kriss::Krissmoon_obj::carte->getRegions();		HX_STACK_VAR(reg,"reg");
				HX_STACK_LINE(199)
				::kriss::Faction _g = reg->__get(this->listeVoisins->get(voisin)->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()->__get(this->listeVoisins->get(voisin)->__Field(HX_CSTRING("y"),true)).StaticCast< ::kriss::Region >()->getFaction();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(199)
				if (((this->faction == _g))){
					HX_STACK_LINE(200)
					int _g1 = this->regionAllie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(200)
					if (((_g1 == (int)-1))){
						HX_STACK_LINE(201)
						this->regionAllie->push((HX_CSTRING("") + voisin));
					}
					HX_STACK_LINE(202)
					int _g2 = this->regionEnnemie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(202)
					if (((_g2 != (int)-1))){
						HX_STACK_LINE(203)
						this->regionEnnemie->remove((HX_CSTRING("") + voisin));
					}
				}
				else{
					HX_STACK_LINE(206)
					int _g3 = this->regionEnnemie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(206)
					if (((_g3 == (int)-1))){
						HX_STACK_LINE(207)
						this->regionEnnemie->push((HX_CSTRING("") + voisin));
					}
					HX_STACK_LINE(209)
					int _g4 = this->regionAllie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(209)
					if (((_g4 != (int)-1))){
						HX_STACK_LINE(210)
						this->regionAllie->remove((HX_CSTRING("") + voisin));
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,typeVoisins,(void))

Array< ::String > Region_obj::getEnnemie( ){
	HX_STACK_FRAME("kriss.Region","getEnnemie",0x36504a61,"kriss.Region.getEnnemie","kriss/Region.hx",218,0x580c409d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return this->regionEnnemie;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getEnnemie,return )

Array< ::String > Region_obj::getAllie( ){
	HX_STACK_FRAME("kriss.Region","getAllie",0xc71292f5,"kriss.Region.getAllie","kriss/Region.hx",221,0x580c409d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	return this->regionAllie;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getAllie,return )

Void Region_obj::attaqueZone( ::String orientation){
{
		HX_STACK_FRAME("kriss.Region","attaqueZone",0x0d513b3f,"kriss.Region.attaqueZone","kriss/Region.hx",224,0x580c409d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(orientation,"orientation")
		HX_STACK_LINE(225)
		Dynamic p = this->listeVoisins->get(orientation);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(226)
		Array< ::Dynamic > r = ::kriss::Krissmoon_obj::carte->getRegions();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(227)
		::String _g = r->__get(p->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()->__get(p->__Field(HX_CSTRING("y"),true)).StaticCast< ::kriss::Region >()->getFaction()->getNom();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		if (((_g == HX_CSTRING("Neutre")))){
			HX_STACK_LINE(228)
			r->__get(p->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()->__get(p->__Field(HX_CSTRING("y"),true)).StaticCast< ::kriss::Region >()->changement_Faction(this->faction);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,attaqueZone,(void))


Region_obj::Region_obj()
{
}

void Region_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Region);
	HX_MARK_MEMBER_NAME(hexa,"hexa");
	HX_MARK_MEMBER_NAME(faction,"faction");
	HX_MARK_MEMBER_NAME(listeVoisins,"listeVoisins");
	HX_MARK_MEMBER_NAME(regionAllie,"regionAllie");
	HX_MARK_MEMBER_NAME(regionEnnemie,"regionEnnemie");
	HX_MARK_END_CLASS();
}

void Region_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hexa,"hexa");
	HX_VISIT_MEMBER_NAME(faction,"faction");
	HX_VISIT_MEMBER_NAME(listeVoisins,"listeVoisins");
	HX_VISIT_MEMBER_NAME(regionAllie,"regionAllie");
	HX_VISIT_MEMBER_NAME(regionEnnemie,"regionEnnemie");
}

Dynamic Region_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hexa") ) { return hexa; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"faction") ) { return faction; }
		if (HX_FIELD_EQ(inName,"voisins") ) { return voisins_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getAllie") ) { return getAllie_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getVoisins") ) { return getVoisins_dyn(); }
		if (HX_FIELD_EQ(inName,"getFaction") ) { return getFaction_dyn(); }
		if (HX_FIELD_EQ(inName,"getEnnemie") ) { return getEnnemie_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"regionAllie") ) { return regionAllie; }
		if (HX_FIELD_EQ(inName,"typeVoisins") ) { return typeVoisins_dyn(); }
		if (HX_FIELD_EQ(inName,"attaqueZone") ) { return attaqueZone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listeVoisins") ) { return listeVoisins; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"regionEnnemie") ) { return regionEnnemie; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"changement_Faction") ) { return changement_Faction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Region_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hexa") ) { hexa=inValue.Cast< ::kriss::Case >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"faction") ) { faction=inValue.Cast< ::kriss::Faction >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"regionAllie") ) { regionAllie=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listeVoisins") ) { listeVoisins=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"regionEnnemie") ) { regionEnnemie=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hexa"));
	outFields->push(HX_CSTRING("faction"));
	outFields->push(HX_CSTRING("listeVoisins"));
	outFields->push(HX_CSTRING("regionAllie"));
	outFields->push(HX_CSTRING("regionEnnemie"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::kriss::Case*/ ,(int)offsetof(Region_obj,hexa),HX_CSTRING("hexa")},
	{hx::fsObject /*::kriss::Faction*/ ,(int)offsetof(Region_obj,faction),HX_CSTRING("faction")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Region_obj,listeVoisins),HX_CSTRING("listeVoisins")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Region_obj,regionAllie),HX_CSTRING("regionAllie")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Region_obj,regionEnnemie),HX_CSTRING("regionEnnemie")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hexa"),
	HX_CSTRING("faction"),
	HX_CSTRING("listeVoisins"),
	HX_CSTRING("regionAllie"),
	HX_CSTRING("regionEnnemie"),
	HX_CSTRING("changement_Faction"),
	HX_CSTRING("voisins"),
	HX_CSTRING("getVoisins"),
	HX_CSTRING("getFaction"),
	HX_CSTRING("typeVoisins"),
	HX_CSTRING("getEnnemie"),
	HX_CSTRING("getAllie"),
	HX_CSTRING("attaqueZone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

#endif

Class Region_obj::__mClass;

void Region_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("kriss.Region"), hx::TCanCast< Region_obj> ,sStaticFields,sMemberFields,
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

void Region_obj::__boot()
{
}

} // end namespace kriss
