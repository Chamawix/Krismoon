#include <hxcpp.h>

#ifndef INCLUDED_Case
#include <Case.h>
#endif
#ifndef INCLUDED_Faction
#include <Faction.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Region
#include <Region.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void Region_obj::__construct(::Case h,::Faction nouvelleFaction)
{
HX_STACK_FRAME("Region","new",0xb91ef006,"Region.new","Region.hx",35,0x0b29722a)
HX_STACK_THIS(this)
HX_STACK_ARG(h,"h")
HX_STACK_ARG(nouvelleFaction,"nouvelleFaction")
{
	HX_STACK_LINE(42)
	this->regionEnnemie = Array_obj< ::String >::__new();
	HX_STACK_LINE(41)
	this->regionAllie = Array_obj< ::String >::__new();
	HX_STACK_LINE(48)
	this->hexa = h;
	HX_STACK_LINE(49)
	this->faction = nouvelleFaction;
	HX_STACK_LINE(51)
	this->hexa->updateHexa(this->faction->couleur);
	HX_STACK_LINE(53)
	this->faction->ajoutTerritoire(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(55)
	::haxe::ds::StringMap _g = this->voisins();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	this->listeVoisins = _g;
}
;
	return null();
}

//Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new(::Case h,::Faction nouvelleFaction)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(h,nouvelleFaction);
	return result;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Region_obj::changement_Faction( ::Faction nouvelleFaction){
{
		HX_STACK_FRAME("Region","changement_Faction",0x420b8625,"Region.changement_Faction","Region.hx",60,0x0b29722a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nouvelleFaction,"nouvelleFaction")
		HX_STACK_LINE(69)
		this->faction->retraitTerritoire(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(71)
		this->faction = nouvelleFaction;
		HX_STACK_LINE(72)
		this->hexa->updateHexa(this->faction->couleur);
		HX_STACK_LINE(75)
		this->faction->ajoutTerritoire(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(77)
		this->typeVoisins();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Region_obj,changement_Faction,(void))

::haxe::ds::StringMap Region_obj::voisins( ){
	HX_STACK_FRAME("Region","voisins",0xc8b33411,"Region.voisins","Region.hx",81,0x0b29722a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::haxe::ds::StringMap result = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(84)
	int p_x = this->hexa->ligne;		HX_STACK_VAR(p_x,"p_x");
	HX_STACK_LINE(84)
	int p_y = this->hexa->colonne;		HX_STACK_VAR(p_y,"p_y");
	HX_STACK_LINE(85)
	int q;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(86)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(87)
	if (((this->hexa->colonne == (int)8))){
	}
	HX_STACK_LINE(93)
	if (((hx::Mod(this->hexa->ligne,(int)2) == (int)0))){
		HX_STACK_LINE(95)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		while((true)){
			HX_STACK_LINE(95)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(95)
				break;
			}
			HX_STACK_LINE(95)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(96)
			switch( (int)(i)){
				case (int)0: {
					HX_STACK_LINE(98)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(99)
					r = this->hexa->ligne;
					HX_STACK_LINE(101)
					if (((q >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",101,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(101)
						result->set(HX_CSTRING("O"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(104)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(105)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(106)
					if (((bool((q >= (int)0)) && bool((r >= (int)0))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",107,0x0b29722a)
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
						result->set(HX_CSTRING("NO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(111)
					q = this->hexa->colonne;
					HX_STACK_LINE(112)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(113)
					if (((r >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",114,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(114)
						result->set(HX_CSTRING("NE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(119)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(120)
					r = this->hexa->ligne;
					HX_STACK_LINE(122)
					if (((q < ::Main_obj::NUM_COLUMNS))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",123,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(123)
						result->set(HX_CSTRING("E"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(129)
					q = this->hexa->colonne;
					HX_STACK_LINE(130)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(131)
					if (((r < ::Main_obj::NUM_ROWS))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",132,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(132)
						result->set(HX_CSTRING("SE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(137)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(138)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(139)
					if (((bool((q >= (int)0)) && bool((r < ::Main_obj::NUM_ROWS))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",140,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(140)
						result->set(HX_CSTRING("SO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
			}
		}
	}
	else{
		HX_STACK_LINE(147)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(147)
			int j = (_g)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(148)
			switch( (int)(j)){
				case (int)0: {
					HX_STACK_LINE(150)
					q = (this->hexa->colonne - (int)1);
					HX_STACK_LINE(151)
					r = this->hexa->ligne;
					HX_STACK_LINE(152)
					if (((q >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",153,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(153)
						result->set(HX_CSTRING("O"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(157)
					q = this->hexa->colonne;
					HX_STACK_LINE(158)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(159)
					if (((r >= (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",160,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(160)
						result->set(HX_CSTRING("NO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(164)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(165)
					r = (this->hexa->ligne - (int)1);
					HX_STACK_LINE(166)
					if (((bool((r >= (int)0)) && bool((q < ::Main_obj::NUM_COLUMNS))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",167,0x0b29722a)
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
						result->set(HX_CSTRING("NE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(172)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(173)
					r = this->hexa->ligne;
					HX_STACK_LINE(174)
					if (((q < ::Main_obj::NUM_COLUMNS))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",175,0x0b29722a)
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
						result->set(HX_CSTRING("E"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(180)
					q = (this->hexa->colonne + (int)1);
					HX_STACK_LINE(181)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(182)
					if (((bool((r < ::Main_obj::NUM_ROWS)) && bool((q < ::Main_obj::NUM_COLUMNS))))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",183,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(183)
						result->set(HX_CSTRING("SE"),_Function_5_1::Block(r,q));
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(188)
					q = this->hexa->colonne;
					HX_STACK_LINE(189)
					r = (this->hexa->ligne + (int)1);
					HX_STACK_LINE(190)
					if (((r < ::Main_obj::NUM_ROWS))){
						struct _Function_5_1{
							inline static Dynamic Block( int &r,int &q){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Region.hx",191,0x0b29722a)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("x") , q,false);
									__result->Add(HX_CSTRING("y") , r,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(191)
						result->set(HX_CSTRING("SO"),_Function_5_1::Block(r,q));
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(198)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,voisins,return )

Void Region_obj::getVoisins( ){
{
		HX_STACK_FRAME("Region","getVoisins",0x9666908f,"Region.getVoisins","Region.hx",201,0x0b29722a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getVoisins,(void))

::Faction Region_obj::getFaction( ){
	HX_STACK_FRAME("Region","getFaction",0xf051d3c0,"Region.getFaction","Region.hx",207,0x0b29722a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return this->faction;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getFaction,return )

Void Region_obj::typeVoisins( ){
{
		HX_STACK_FRAME("Region","typeVoisins",0x3dc5df77,"Region.typeVoisins","Region.hx",210,0x0b29722a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		Dynamic iter = this->listeVoisins->keys();		HX_STACK_VAR(iter,"iter");
		HX_STACK_LINE(212)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(iter);  __it->hasNext(); ){
			::String voisin = __it->next();
			{
				HX_STACK_LINE(213)
				::Faction _g = ::Main_obj::regions->__get(this->listeVoisins->get(voisin)->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()->__get(this->listeVoisins->get(voisin)->__Field(HX_CSTRING("y"),true)).StaticCast< ::Region >()->getFaction();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(213)
				if (((this->faction == _g))){
					HX_STACK_LINE(214)
					int _g1 = this->regionAllie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(214)
					if (((_g1 == (int)-1))){
						HX_STACK_LINE(215)
						this->regionAllie->push((HX_CSTRING("") + voisin));
					}
					HX_STACK_LINE(216)
					int _g2 = this->regionEnnemie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(216)
					if (((_g2 != (int)-1))){
						HX_STACK_LINE(217)
						this->regionEnnemie->remove((HX_CSTRING("") + voisin));
					}
				}
				else{
					HX_STACK_LINE(220)
					int _g3 = this->regionEnnemie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(220)
					if (((_g3 == (int)-1))){
						HX_STACK_LINE(221)
						this->regionEnnemie->push((HX_CSTRING("") + voisin));
					}
					HX_STACK_LINE(223)
					int _g4 = this->regionAllie->indexOf((HX_CSTRING("") + voisin),null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(223)
					if (((_g4 != (int)-1))){
						HX_STACK_LINE(224)
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
	HX_STACK_FRAME("Region","getEnnemie",0x44e13fcd,"Region.getEnnemie","Region.hx",232,0x0b29722a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return this->regionEnnemie;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getEnnemie,return )

Array< ::String > Region_obj::getAllie( ){
	HX_STACK_FRAME("Region","getAllie",0x782d1561,"Region.getAllie","Region.hx",235,0x0b29722a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return this->regionAllie;
}


HX_DEFINE_DYNAMIC_FUNC0(Region_obj,getAllie,return )

Void Region_obj::attaqueZone( ::String orientation){
{
		HX_STACK_FRAME("Region","attaqueZone",0xbd970453,"Region.attaqueZone","Region.hx",238,0x0b29722a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(orientation,"orientation")
		HX_STACK_LINE(239)
		Dynamic p = this->listeVoisins->get(orientation);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(241)
		if (((::Main_obj::regions->__get(p->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()->__get(p->__Field(HX_CSTRING("y"),true)).StaticCast< ::Region >()->getFaction()->nom == HX_CSTRING("Neutre")))){
			HX_STACK_LINE(242)
			::Main_obj::regions->__get(p->__Field(HX_CSTRING("x"),true)).StaticCast< Array< ::Dynamic > >()->__get(p->__Field(HX_CSTRING("y"),true)).StaticCast< ::Region >()->changement_Faction(this->faction);
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
		if (HX_FIELD_EQ(inName,"hexa") ) { hexa=inValue.Cast< ::Case >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"faction") ) { faction=inValue.Cast< ::Faction >(); return inValue; }
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
	{hx::fsObject /*::Case*/ ,(int)offsetof(Region_obj,hexa),HX_CSTRING("hexa")},
	{hx::fsObject /*::Faction*/ ,(int)offsetof(Region_obj,faction),HX_CSTRING("faction")},
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
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Region"), hx::TCanCast< Region_obj> ,sStaticFields,sMemberFields,
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

