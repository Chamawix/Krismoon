#include <hxcpp.h>

#ifndef INCLUDED_Case
#include <Case.h>
#endif
#ifndef INCLUDED_Faction
#include <Faction.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Region
#include <Region.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
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
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",23,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->space = ::nape::space::Space_obj::__new(null(),null());
	HX_STACK_LINE(30)
	this->factions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	this->hexas = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(37)
	this->init();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",40,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->event_changeColor_dyn(),null(),null(),null());
		HX_STACK_LINE(49)
		::Faction _g = ::Faction_obj::__new(HX_CSTRING("Mort-vivant"),(int)9,(int)1,(int)1118481);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		this->factions->push(_g);
		HX_STACK_LINE(50)
		::Faction _g1 = ::Faction_obj::__new(HX_CSTRING("Justicar"),(int)5,(int)5,(int)8921634);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		this->factions->push(_g1);
		HX_STACK_LINE(51)
		::Faction _g2 = ::Faction_obj::__new(HX_CSTRING("Bezergner"),(int)8,(int)2,(int)13386820);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		this->factions->push(_g2);
		HX_STACK_LINE(52)
		::Faction _g3 = ::Faction_obj::__new(HX_CSTRING("Morticor"),(int)3,(int)7,(int)1123003);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(52)
		this->factions->push(_g3);
		HX_STACK_LINE(53)
		::Faction _g4 = ::Faction_obj::__new(HX_CSTRING("Envirald"),(int)1,(int)9,(int)2276113);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(53)
		this->factions->push(_g4);
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(60)
			int _g5 = ::Main_obj::NUM_ROWS;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				if ((!(((_g11 < _g5))))){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(60)
				int row = (_g11)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(62)
				::Main_obj::regions[row] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(63)
				this->hexas[row] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(65)
					int _g21 = ::Main_obj::NUM_COLUMNS;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(65)
					while((true)){
						HX_STACK_LINE(65)
						if ((!(((_g31 < _g21))))){
							HX_STACK_LINE(65)
							break;
						}
						HX_STACK_LINE(65)
						int column = (_g31)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(67)
						::Main_obj::regions->__get(row).StaticCast< Array< ::Dynamic > >()[column] = null();
						HX_STACK_LINE(68)
						this->hexas->__get(row).StaticCast< Array< ::Dynamic > >()[column] = null();
					}
				}
			}
		}
		HX_STACK_LINE(79)
		int _g5 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(79)
		int _g6 = (_g5 - (int)100);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(79)
		int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(79)
		int _g8 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(79)
		int _g9 = (_g8 - (int)100);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(79)
		int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(79)
		this->drawMap(::Main_obj::NUM_ROWS,::Main_obj::NUM_COLUMNS,_g7,_g10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::drawMap( int mapx,int mapy,int w,int h){
{
		HX_STACK_FRAME("Main","drawMap",0x600457e3,"Main.drawMap","Main.hx",89,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mapx,"mapx")
		HX_STACK_ARG(mapy,"mapy")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(94)
		int radius = (int)20;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(95)
		Float xhexa;		HX_STACK_VAR(xhexa,"xhexa");
		HX_STACK_LINE(96)
		Float yhexa;		HX_STACK_VAR(yhexa,"yhexa");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				if ((!(((_g < mapy))))){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				{
					HX_STACK_LINE(102)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(102)
					while((true)){
						HX_STACK_LINE(102)
						if ((!(((_g1 < mapx))))){
							HX_STACK_LINE(102)
							break;
						}
						HX_STACK_LINE(102)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(103)
						if (((hx::Mod(j,(int)2) == (int)0))){
							HX_STACK_LINE(104)
							Float _g2 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(104)
							Float _g11 = (((i * radius) * (int)2) * _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(104)
							Float _g21 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(104)
							Float _g3 = (_g21 + (radius * (int)2));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(104)
							xhexa = _g3;
							HX_STACK_LINE(105)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						else{
							HX_STACK_LINE(109)
							Float _g4 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(109)
							Float _g5 = (((i * radius) * (int)2) * _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(109)
							Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(109)
							Float _g7 = (_g6 + (radius * (int)2));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(109)
							Float _g8 = (_g7 + radius);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(109)
							Float _g9 = (_g8 - (Float(((int)2 * radius)) / Float((int)15)));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(109)
							xhexa = _g9;
							HX_STACK_LINE(110)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						HX_STACK_LINE(113)
						int colonne = i;		HX_STACK_VAR(colonne,"colonne");
						HX_STACK_LINE(114)
						int ligne = j;		HX_STACK_VAR(ligne,"ligne");
						HX_STACK_LINE(116)
						::Case hexa = ::Case_obj::__new(colonne,ligne,xhexa,yhexa,(((int)11141120 + (j * (int)1000)) + (i * (int)10000)),radius);		HX_STACK_VAR(hexa,"hexa");
						HX_STACK_LINE(118)
						hexa->drawOneHexa();
						HX_STACK_LINE(121)
						this->addChild(hexa);
						HX_STACK_LINE(124)
						this->hexas->__get(i).StaticCast< Array< ::Dynamic > >()[j] = hexa;
						HX_STACK_LINE(125)
						::Region region;		HX_STACK_VAR(region,"region");
						HX_STACK_LINE(129)
						if (((bool((i == (int)0)) && bool((j == (int)0))))){
							HX_STACK_LINE(131)
							::Region _g10 = ::Region_obj::__new(hexa,this->factions->__get((int)0).StaticCast< ::Faction >());		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(131)
							region = _g10;
						}
						else{
							HX_STACK_LINE(133)
							if (((bool((i == (int)5)) && bool((j == (int)4))))){
								HX_STACK_LINE(134)
								::Region _g11 = ::Region_obj::__new(hexa,this->factions->__get((int)1).StaticCast< ::Faction >());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(134)
								region = _g11;
							}
							else{
								HX_STACK_LINE(135)
								if (((bool((i == (int)7)) && bool((j == (int)5))))){
									HX_STACK_LINE(136)
									::Region _g12 = ::Region_obj::__new(hexa,this->factions->__get((int)2).StaticCast< ::Faction >());		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(136)
									region = _g12;
								}
								else{
									HX_STACK_LINE(137)
									if (((bool((i == (int)2)) && bool((j == (int)7))))){
										HX_STACK_LINE(138)
										::Region _g13 = ::Region_obj::__new(hexa,this->factions->__get((int)3).StaticCast< ::Faction >());		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(138)
										region = _g13;
									}
									else{
										HX_STACK_LINE(139)
										if (((bool((i == (int)9)) && bool((j == (int)8))))){
											HX_STACK_LINE(140)
											::Region _g14 = ::Region_obj::__new(hexa,this->factions->__get((int)4).StaticCast< ::Faction >());		HX_STACK_VAR(_g14,"_g14");
											HX_STACK_LINE(140)
											region = _g14;
										}
										else{
											HX_STACK_LINE(142)
											::Region _g15 = ::Region_obj::__new(hexa,::Main_obj::factionNeutre);		HX_STACK_VAR(_g15,"_g15");
											HX_STACK_LINE(142)
											region = _g15;
										}
									}
								}
							}
						}
						HX_STACK_LINE(149)
						::Main_obj::regions->__get(i).StaticCast< Array< ::Dynamic > >()[j] = region;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Main_obj,drawMap,(void))

Void Main_obj::event_changeColor( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Main","event_changeColor",0x2fe2a999,"Main.event_changeColor","Main.hx",163,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(163)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Array< ::Dynamic > _g1 = this->factions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			::Faction faction = _g1->__get(_g).StaticCast< ::Faction >();		HX_STACK_VAR(faction,"faction");
			HX_STACK_LINE(163)
			++(_g);
			HX_STACK_LINE(165)
			faction->attaque();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,event_changeColor,(void))

int Main_obj::NUM_COLUMNS;

int Main_obj::NUM_ROWS;

::Faction Main_obj::factionNeutre;

Array< ::Dynamic > Main_obj::regions;


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(hexas,"hexas");
	HX_MARK_MEMBER_NAME(factions,"factions");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(debug,"debug");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hexas,"hexas");
	HX_VISIT_MEMBER_NAME(factions,"factions");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"hexas") ) { return hexas; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		if (HX_FIELD_EQ(inName,"drawMap") ) { return drawMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { return NUM_ROWS; }
		if (HX_FIELD_EQ(inName,"factions") ) { return factions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_COLUMNS") ) { return NUM_COLUMNS; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"factionNeutre") ) { return factionNeutre; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_changeColor") ) { return event_changeColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hexas") ) { hexas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { NUM_ROWS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"factions") ) { factions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_COLUMNS") ) { NUM_COLUMNS=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"factionNeutre") ) { factionNeutre=inValue.Cast< ::Faction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hexas"));
	outFields->push(HX_CSTRING("factions"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("debug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NUM_COLUMNS"),
	HX_CSTRING("NUM_ROWS"),
	HX_CSTRING("factionNeutre"),
	HX_CSTRING("regions"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,hexas),HX_CSTRING("hexas")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,factions),HX_CSTRING("factions")},
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(Main_obj,space),HX_CSTRING("space")},
	{hx::fsObject /*::nape::util::ShapeDebug*/ ,(int)offsetof(Main_obj,debug),HX_CSTRING("debug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hexas"),
	HX_CSTRING("factions"),
	HX_CSTRING("space"),
	HX_CSTRING("debug"),
	HX_CSTRING("init"),
	HX_CSTRING("drawMap"),
	HX_CSTRING("event_changeColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::NUM_COLUMNS,"NUM_COLUMNS");
	HX_MARK_MEMBER_NAME(Main_obj::NUM_ROWS,"NUM_ROWS");
	HX_MARK_MEMBER_NAME(Main_obj::factionNeutre,"factionNeutre");
	HX_MARK_MEMBER_NAME(Main_obj::regions,"regions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::NUM_COLUMNS,"NUM_COLUMNS");
	HX_VISIT_MEMBER_NAME(Main_obj::NUM_ROWS,"NUM_ROWS");
	HX_VISIT_MEMBER_NAME(Main_obj::factionNeutre,"factionNeutre");
	HX_VISIT_MEMBER_NAME(Main_obj::regions,"regions");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
	NUM_COLUMNS= (int)12;
	NUM_ROWS= (int)12;
	factionNeutre= ::Faction_obj::__new(HX_CSTRING("Neutre"),(int)0,(int)0,(int)11184810);
	regions= Array_obj< ::Dynamic >::__new();
}
