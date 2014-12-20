#include <hxcpp.h>

#ifndef INCLUDED_Case
#include <Case.h>
#endif
<<<<<<< HEAD
#ifndef INCLUDED_Main
#include <Main.h>
#endif
=======
#ifndef INCLUDED_Faction
#include <Faction.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Region
#include <Region.h>
#endif
>>>>>>> version_remasterisée
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
<<<<<<< HEAD
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
=======
>>>>>>> version_remasterisée
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
<<<<<<< HEAD
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",21,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->space = ::nape::space::Space_obj::__new(null(),null());
	HX_STACK_LINE(25)
	this->hexas = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
=======
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",20,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->factions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
>>>>>>> version_remasterisée
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
<<<<<<< HEAD
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",35,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->event_changeColor_dyn(),null(),null(),null());
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			int _g = ::Main_obj::NUM_ROWS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				int row = (_g1)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(97)
				this->hexas[row] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(99)
				{
					HX_STACK_LINE(99)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(99)
					int _g2 = ::Main_obj::NUM_COLUMNS;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(99)
					while((true)){
						HX_STACK_LINE(99)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(99)
							break;
						}
						HX_STACK_LINE(99)
						int column = (_g3)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(101)
						this->hexas->__get(row).StaticCast< Array< ::Dynamic > >()[column] = null();
=======
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",33,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->event_changeColor_dyn(),null(),null(),null());
		HX_STACK_LINE(42)
		::Faction _g = ::Faction_obj::__new(HX_CSTRING("Mort-vivant"),(int)9,(int)1,(int)1118481);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->factions->push(_g);
		HX_STACK_LINE(43)
		::Faction _g1 = ::Faction_obj::__new(HX_CSTRING("Justicar"),(int)5,(int)5,(int)14540066);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->factions->push(_g1);
		HX_STACK_LINE(44)
		::Faction _g2 = ::Faction_obj::__new(HX_CSTRING("Bezergner"),(int)8,(int)2,(int)13386820);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		this->factions->push(_g2);
		HX_STACK_LINE(45)
		::Faction _g3 = ::Faction_obj::__new(HX_CSTRING("Morticor"),(int)3,(int)7,(int)1123003);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(45)
		this->factions->push(_g3);
		HX_STACK_LINE(46)
		::Faction _g4 = ::Faction_obj::__new(HX_CSTRING("Envirald"),(int)1,(int)9,(int)43520);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(46)
		this->factions->push(_g4);
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(53)
			int _g5 = ::Main_obj::NUM_ROWS;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				if ((!(((_g11 < _g5))))){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				int row = (_g11)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(55)
				::Main_obj::regions[row] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(58)
					int _g21 = ::Main_obj::NUM_COLUMNS;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(58)
					while((true)){
						HX_STACK_LINE(58)
						if ((!(((_g31 < _g21))))){
							HX_STACK_LINE(58)
							break;
						}
						HX_STACK_LINE(58)
						int column = (_g31)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(60)
						::Main_obj::regions->__get(row).StaticCast< Array< ::Dynamic > >()[column] = null();
>>>>>>> version_remasterisée
					}
				}
			}
		}
<<<<<<< HEAD
		HX_STACK_LINE(107)
		int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		int _g1 = (_g - (int)100);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(107)
		int _g3 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(107)
		int _g4 = (_g3 - (int)100);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(107)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(107)
		this->drawHexagones(::Main_obj::NUM_ROWS,::Main_obj::NUM_COLUMNS,_g2,_g5);
=======
		HX_STACK_LINE(72)
		int _g5 = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(72)
		int _g6 = (_g5 - (int)100);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(72)
		int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(72)
		int _g8 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(72)
		int _g9 = (_g8 - (int)100);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(72)
		int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(72)
		this->drawMap(::Main_obj::NUM_ROWS,::Main_obj::NUM_COLUMNS,_g7,_g10);
>>>>>>> version_remasterisée
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

<<<<<<< HEAD
Void Main_obj::drawHexagones( int mapx,int mapy,int w,int h){
{
		HX_STACK_FRAME("Main","drawHexagones",0x593c94d5,"Main.drawHexagones","Main.hx",112,0x087e5c05)
=======
Void Main_obj::drawMap( int mapx,int mapy,int w,int h){
{
		HX_STACK_FRAME("Main","drawMap",0x600457e3,"Main.drawMap","Main.hx",82,0x087e5c05)
>>>>>>> version_remasterisée
		HX_STACK_THIS(this)
		HX_STACK_ARG(mapx,"mapx")
		HX_STACK_ARG(mapy,"mapy")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
<<<<<<< HEAD
		HX_STACK_LINE(117)
		int radius = (int)20;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(118)
		Float xhexa;		HX_STACK_VAR(xhexa,"xhexa");
		HX_STACK_LINE(119)
		Float yhexa;		HX_STACK_VAR(yhexa,"yhexa");
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			while((true)){
				HX_STACK_LINE(124)
				if ((!(((_g < mapx))))){
					HX_STACK_LINE(124)
					break;
				}
				HX_STACK_LINE(124)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(125)
					while((true)){
						HX_STACK_LINE(125)
						if ((!(((_g1 < mapy))))){
							HX_STACK_LINE(125)
							break;
						}
						HX_STACK_LINE(125)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(126)
						if (((hx::Mod(j,(int)2) == (int)0))){
							HX_STACK_LINE(127)
							Float _g2 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(127)
							Float _g11 = (((i * radius) * (int)2) * _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(127)
							Float _g21 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(127)
							Float _g3 = (_g21 + (radius * (int)2));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(127)
							xhexa = _g3;
							HX_STACK_LINE(128)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						else{
							HX_STACK_LINE(132)
							Float _g4 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(132)
							Float _g5 = (((i * radius) * (int)2) * _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(132)
							Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(132)
							Float _g7 = (_g6 + (radius * (int)2));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(132)
							Float _g8 = (_g7 + radius);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(132)
							Float _g9 = (_g8 - (Float(((int)2 * radius)) / Float((int)15)));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(132)
							xhexa = _g9;
							HX_STACK_LINE(133)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						HX_STACK_LINE(139)
						::Case hexa = ::Case_obj::__new(i,j,xhexa,yhexa,(((int)11141120 + (j * (int)1000)) + (i * (int)10000)));		HX_STACK_VAR(hexa,"hexa");
						HX_STACK_LINE(141)
						hexa->drawOneHexa(xhexa,yhexa,radius);
						HX_STACK_LINE(143)
						this->addChild(hexa);
						HX_STACK_LINE(145)
						this->hexas->__get(i).StaticCast< Array< ::Dynamic > >()[j] = hexa;
=======
		HX_STACK_LINE(87)
		int radius = (int)20;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(88)
		Float xhexa;		HX_STACK_VAR(xhexa,"xhexa");
		HX_STACK_LINE(89)
		Float yhexa;		HX_STACK_VAR(yhexa,"yhexa");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				if ((!(((_g < mapy))))){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(95)
					while((true)){
						HX_STACK_LINE(95)
						if ((!(((_g1 < mapx))))){
							HX_STACK_LINE(95)
							break;
						}
						HX_STACK_LINE(95)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(96)
						if (((hx::Mod(j,(int)2) == (int)0))){
							HX_STACK_LINE(97)
							Float _g2 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(97)
							Float _g11 = (((i * radius) * (int)2) * _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(97)
							Float _g21 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(97)
							Float _g3 = (_g21 + (radius * (int)2));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(97)
							xhexa = _g3;
							HX_STACK_LINE(98)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						else{
							HX_STACK_LINE(102)
							Float _g4 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(102)
							Float _g5 = (((i * radius) * (int)2) * _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(102)
							Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(102)
							Float _g7 = (_g6 + (radius * (int)2));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(102)
							Float _g8 = (_g7 + radius);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(102)
							Float _g9 = (_g8 - (Float(((int)2 * radius)) / Float((int)15)));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(102)
							xhexa = _g9;
							HX_STACK_LINE(103)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						HX_STACK_LINE(106)
						int colonne = i;		HX_STACK_VAR(colonne,"colonne");
						HX_STACK_LINE(107)
						int ligne = j;		HX_STACK_VAR(ligne,"ligne");
						HX_STACK_LINE(109)
						::Case hexa = ::Case_obj::__new(colonne,ligne,xhexa,yhexa,(((int)11141120 + (j * (int)1000)) + (i * (int)10000)),radius);		HX_STACK_VAR(hexa,"hexa");
						HX_STACK_LINE(111)
						hexa->drawOneHexa();
						HX_STACK_LINE(114)
						this->addChild(hexa);
						HX_STACK_LINE(117)
						::Region region;		HX_STACK_VAR(region,"region");
						HX_STACK_LINE(121)
						if (((bool((i == (int)0)) && bool((j == (int)0))))){
							HX_STACK_LINE(123)
							::Region _g10 = ::Region_obj::__new(hexa,this->factions->__get((int)0).StaticCast< ::Faction >());		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(123)
							region = _g10;
						}
						else{
							HX_STACK_LINE(125)
							if (((bool((i == (int)5)) && bool((j == (int)4))))){
								HX_STACK_LINE(126)
								::Region _g11 = ::Region_obj::__new(hexa,this->factions->__get((int)1).StaticCast< ::Faction >());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(126)
								region = _g11;
							}
							else{
								HX_STACK_LINE(127)
								if (((bool((i == (int)7)) && bool((j == (int)5))))){
									HX_STACK_LINE(128)
									::Region _g12 = ::Region_obj::__new(hexa,this->factions->__get((int)2).StaticCast< ::Faction >());		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(128)
									region = _g12;
								}
								else{
									HX_STACK_LINE(129)
									if (((bool((i == (int)2)) && bool((j == (int)7))))){
										HX_STACK_LINE(130)
										::Region _g13 = ::Region_obj::__new(hexa,this->factions->__get((int)3).StaticCast< ::Faction >());		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(130)
										region = _g13;
									}
									else{
										HX_STACK_LINE(131)
										if (((bool((i == (int)9)) && bool((j == (int)8))))){
											HX_STACK_LINE(132)
											::Region _g14 = ::Region_obj::__new(hexa,this->factions->__get((int)4).StaticCast< ::Faction >());		HX_STACK_VAR(_g14,"_g14");
											HX_STACK_LINE(132)
											region = _g14;
										}
										else{
											HX_STACK_LINE(134)
											::Region _g15 = ::Region_obj::__new(hexa,::Main_obj::factionNeutre);		HX_STACK_VAR(_g15,"_g15");
											HX_STACK_LINE(134)
											region = _g15;
										}
									}
								}
							}
						}
						HX_STACK_LINE(139)
						::Main_obj::regions->__get(i).StaticCast< Array< ::Dynamic > >()[j] = region;
>>>>>>> version_remasterisée
					}
				}
			}
		}
	}
return null();
}


<<<<<<< HEAD
HX_DEFINE_DYNAMIC_FUNC4(Main_obj,drawHexagones,(void))

Void Main_obj::event_changeColor( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Main","event_changeColor",0x2fe2a999,"Main.event_changeColor","Main.hx",151,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(152)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		Float _g1 = (_g * ::Main_obj::NUM_ROWS);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		int i = ::Std_obj::_int(_g1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(153)
		Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(153)
		Float _g3 = (_g2 * ::Main_obj::NUM_COLUMNS);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(153)
		int j = ::Std_obj::_int(_g3);		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(155)
		::Case hexa = this->hexas->__get(i).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::Case >();		HX_STACK_VAR(hexa,"hexa");
		HX_STACK_LINE(157)
		hexa->deleteHexa();
		HX_STACK_LINE(158)
		Float _g4 = ::Math_obj::random();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(158)
		Float _g5 = (_g4 * i);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(158)
		Float _g6 = (_g5 * (int)10000);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(158)
		int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(158)
		int _g8 = ((int)16777215 + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(158)
		Float _g9 = ::Math_obj::random();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(158)
		Float _g10 = (_g9 * j);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(158)
		Float _g11 = (_g10 * (int)100000);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(158)
		int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(158)
		int _g13 = (_g8 + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(158)
		hexa->couleur = _g13;
		HX_STACK_LINE(159)
		hexa->drawOneHexa(hexa->posx,hexa->posy,hexa->radius);
=======
HX_DEFINE_DYNAMIC_FUNC4(Main_obj,drawMap,(void))

Void Main_obj::event_changeColor( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("Main","event_changeColor",0x2fe2a999,"Main.event_changeColor","Main.hx",149,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(149)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		Array< ::Dynamic > _g1 = this->factions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(149)
		while((true)){
			HX_STACK_LINE(149)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(149)
				break;
			}
			HX_STACK_LINE(149)
			::Faction faction = _g1->__get(_g).StaticCast< ::Faction >();		HX_STACK_VAR(faction,"faction");
			HX_STACK_LINE(149)
			++(_g);
			HX_STACK_LINE(151)
			faction->attaque();
		}
>>>>>>> version_remasterisée
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,event_changeColor,(void))

int Main_obj::NUM_COLUMNS;

int Main_obj::NUM_ROWS;

<<<<<<< HEAD
=======
::Faction Main_obj::factionNeutre;

Array< ::Dynamic > Main_obj::regions;

>>>>>>> version_remasterisée

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
<<<<<<< HEAD
	HX_MARK_MEMBER_NAME(hexas,"hexas");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(debug,"debug");
=======
	HX_MARK_MEMBER_NAME(factions,"factions");
>>>>>>> version_remasterisée
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
<<<<<<< HEAD
	HX_VISIT_MEMBER_NAME(hexas,"hexas");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(debug,"debug");
=======
	HX_VISIT_MEMBER_NAME(factions,"factions");
>>>>>>> version_remasterisée
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
<<<<<<< HEAD
	case 5:
		if (HX_FIELD_EQ(inName,"hexas") ) { return hexas; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { return NUM_ROWS; }
=======
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		if (HX_FIELD_EQ(inName,"drawMap") ) { return drawMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { return NUM_ROWS; }
		if (HX_FIELD_EQ(inName,"factions") ) { return factions; }
>>>>>>> version_remasterisée
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_COLUMNS") ) { return NUM_COLUMNS; }
		break;
	case 13:
<<<<<<< HEAD
		if (HX_FIELD_EQ(inName,"drawHexagones") ) { return drawHexagones_dyn(); }
=======
		if (HX_FIELD_EQ(inName,"factionNeutre") ) { return factionNeutre; }
>>>>>>> version_remasterisée
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_changeColor") ) { return event_changeColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
<<<<<<< HEAD
	case 5:
		if (HX_FIELD_EQ(inName,"hexas") ) { hexas=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUM_ROWS") ) { NUM_ROWS=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"NUM_COLUMNS") ) { NUM_COLUMNS=inValue.Cast< int >(); return inValue; }
=======
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
>>>>>>> version_remasterisée
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
<<<<<<< HEAD
	outFields->push(HX_CSTRING("hexas"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("debug"));
=======
	outFields->push(HX_CSTRING("factions"));
>>>>>>> version_remasterisée
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NUM_COLUMNS"),
	HX_CSTRING("NUM_ROWS"),
<<<<<<< HEAD
=======
	HX_CSTRING("factionNeutre"),
	HX_CSTRING("regions"),
>>>>>>> version_remasterisée
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
<<<<<<< HEAD
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,hexas),HX_CSTRING("hexas")},
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(Main_obj,space),HX_CSTRING("space")},
	{hx::fsObject /*::nape::util::ShapeDebug*/ ,(int)offsetof(Main_obj,debug),HX_CSTRING("debug")},
=======
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,factions),HX_CSTRING("factions")},
>>>>>>> version_remasterisée
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
<<<<<<< HEAD
	HX_CSTRING("hexas"),
	HX_CSTRING("space"),
	HX_CSTRING("debug"),
	HX_CSTRING("init"),
	HX_CSTRING("drawHexagones"),
=======
	HX_CSTRING("factions"),
	HX_CSTRING("init"),
	HX_CSTRING("drawMap"),
>>>>>>> version_remasterisée
	HX_CSTRING("event_changeColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::NUM_COLUMNS,"NUM_COLUMNS");
	HX_MARK_MEMBER_NAME(Main_obj::NUM_ROWS,"NUM_ROWS");
<<<<<<< HEAD
=======
	HX_MARK_MEMBER_NAME(Main_obj::factionNeutre,"factionNeutre");
	HX_MARK_MEMBER_NAME(Main_obj::regions,"regions");
>>>>>>> version_remasterisée
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::NUM_COLUMNS,"NUM_COLUMNS");
	HX_VISIT_MEMBER_NAME(Main_obj::NUM_ROWS,"NUM_ROWS");
<<<<<<< HEAD
=======
	HX_VISIT_MEMBER_NAME(Main_obj::factionNeutre,"factionNeutre");
	HX_VISIT_MEMBER_NAME(Main_obj::regions,"regions");
>>>>>>> version_remasterisée
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
<<<<<<< HEAD
	NUM_COLUMNS= (int)10;
	NUM_ROWS= (int)10;
=======
	NUM_COLUMNS= (int)12;
	NUM_ROWS= (int)12;
	factionNeutre= ::Faction_obj::__new(HX_CSTRING("Neutre"),(int)0,(int)0,(int)11184810);
	regions= Array_obj< ::Dynamic >::__new();
>>>>>>> version_remasterisée
}

