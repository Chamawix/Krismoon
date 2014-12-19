#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void Carte_obj::__construct(Float width,Float height,int nrows,int ncolumns)
{
HX_STACK_FRAME("kriss.Carte","new",0x9a0d046b,"kriss.Carte.new","kriss/Carte.hx",9,0xc1441a66)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(nrows,"nrows")
HX_STACK_ARG(ncolumns,"ncolumns")
{
	HX_STACK_LINE(15)
	this->factions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(14)
	this->regions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(13)
	this->factionNeutre = ::kriss::Faction_obj::__new(HX_CSTRING("Neutre"),(int)0,(int)0,(int)11184810);
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	this->w = width;
	HX_STACK_LINE(23)
	this->h = height;
	HX_STACK_LINE(24)
	this->columns = ncolumns;
	HX_STACK_LINE(25)
	this->rows = nrows;
	HX_STACK_LINE(31)
	this->init();
}
;
	return null();
}

//Carte_obj::~Carte_obj() { }

Dynamic Carte_obj::__CreateEmpty() { return  new Carte_obj; }
hx::ObjectPtr< Carte_obj > Carte_obj::__new(Float width,Float height,int nrows,int ncolumns)
{  hx::ObjectPtr< Carte_obj > result = new Carte_obj();
	result->__construct(width,height,nrows,ncolumns);
	return result;}

Dynamic Carte_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Carte_obj > result = new Carte_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Carte_obj::init( ){
{
		HX_STACK_FRAME("kriss.Carte","init",0x2e0f90a5,"kriss.Carte.init","kriss/Carte.hx",41,0xc1441a66)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::kriss::Faction _g = ::kriss::Faction_obj::__new(HX_CSTRING("Mort-vivant"),(int)9,(int)1,(int)1118481);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->factions->push(_g);
		HX_STACK_LINE(44)
		::kriss::Faction _g1 = ::kriss::Faction_obj::__new(HX_CSTRING("Justicar"),(int)5,(int)5,(int)14540066);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		this->factions->push(_g1);
		HX_STACK_LINE(45)
		::kriss::Faction _g2 = ::kriss::Faction_obj::__new(HX_CSTRING("Bezergner"),(int)8,(int)2,(int)13386820);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		this->factions->push(_g2);
		HX_STACK_LINE(46)
		::kriss::Faction _g3 = ::kriss::Faction_obj::__new(HX_CSTRING("Morticor"),(int)3,(int)7,(int)1123003);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(46)
		this->factions->push(_g3);
		HX_STACK_LINE(47)
		::kriss::Faction _g4 = ::kriss::Faction_obj::__new(HX_CSTRING("Envirald"),(int)1,(int)9,(int)43520);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(47)
		this->factions->push(_g4);
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(49)
			int _g5 = this->rows;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((!(((_g11 < _g5))))){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int row = (_g11)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(51)
				this->regions[row] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(53)
					int _g21 = this->columns;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(53)
					while((true)){
						HX_STACK_LINE(53)
						if ((!(((_g31 < _g21))))){
							HX_STACK_LINE(53)
							break;
						}
						HX_STACK_LINE(53)
						int column = (_g31)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(55)
						this->regions->__get(row).StaticCast< Array< ::Dynamic > >()[column] = null();
					}
				}
			}
		}
		HX_STACK_LINE(64)
		int _g5 = ::Std_obj::_int((this->w - (int)100));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(64)
		int _g6 = ::Std_obj::_int((this->h - (int)100));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(64)
		this->drawMap(this->rows,this->columns,_g5,_g6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Carte_obj,init,(void))

Void Carte_obj::drawMap( int mapx,int mapy,int w,int h){
{
		HX_STACK_FRAME("kriss.Carte","drawMap",0x919e8683,"kriss.Carte.drawMap","kriss/Carte.hx",75,0xc1441a66)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mapx,"mapx")
		HX_STACK_ARG(mapy,"mapy")
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(77)
		int radius = (int)20;		HX_STACK_VAR(radius,"radius");
		HX_STACK_LINE(78)
		Float xhexa;		HX_STACK_VAR(xhexa,"xhexa");
		HX_STACK_LINE(79)
		Float yhexa;		HX_STACK_VAR(yhexa,"yhexa");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				if ((!(((_g < mapy))))){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(84)
					while((true)){
						HX_STACK_LINE(84)
						if ((!(((_g1 < mapx))))){
							HX_STACK_LINE(84)
							break;
						}
						HX_STACK_LINE(84)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(85)
						if (((hx::Mod(j,(int)2) == (int)0))){
							HX_STACK_LINE(86)
							Float _g2 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(86)
							Float _g11 = (((i * radius) * (int)2) * _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(86)
							Float _g21 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(86)
							Float _g3 = (_g21 + (radius * (int)2));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(86)
							xhexa = _g3;
							HX_STACK_LINE(87)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						else{
							HX_STACK_LINE(91)
							Float _g4 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(91)
							Float _g5 = (((i * radius) * (int)2) * _g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(91)
							Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(91)
							Float _g7 = (_g6 + (radius * (int)2));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(91)
							Float _g8 = (_g7 + radius);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(91)
							Float _g9 = (_g8 - (Float(((int)2 * radius)) / Float((int)15)));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(91)
							xhexa = _g9;
							HX_STACK_LINE(92)
							yhexa = ((Float((((j * radius) * (int)2) * (int)3)) / Float((int)4)) + (radius * (int)2));
						}
						HX_STACK_LINE(96)
						int colonne = i;		HX_STACK_VAR(colonne,"colonne");
						HX_STACK_LINE(97)
						int ligne = j;		HX_STACK_VAR(ligne,"ligne");
						HX_STACK_LINE(99)
						::kriss::Case hexa = ::kriss::Case_obj::__new(colonne,ligne,xhexa,yhexa,(((int)11141120 + (j * (int)1000)) + (i * (int)10000)),radius);		HX_STACK_VAR(hexa,"hexa");
						HX_STACK_LINE(102)
						hexa->drawOneHexa();
						HX_STACK_LINE(105)
						this->addChild(hexa);
						HX_STACK_LINE(113)
						::kriss::Region region;		HX_STACK_VAR(region,"region");
						HX_STACK_LINE(116)
						if (((bool((i == (int)0)) && bool((j == (int)0))))){
							HX_STACK_LINE(118)
							::kriss::Region _g10 = ::kriss::Region_obj::__new(hexa,this->factions->__get((int)0).StaticCast< ::kriss::Faction >());		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(118)
							region = _g10;
						}
						else{
							HX_STACK_LINE(120)
							if (((bool((i == (int)5)) && bool((j == (int)4))))){
								HX_STACK_LINE(121)
								::kriss::Region _g11 = ::kriss::Region_obj::__new(hexa,this->factions->__get((int)1).StaticCast< ::kriss::Faction >());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(121)
								region = _g11;
							}
							else{
								HX_STACK_LINE(122)
								if (((bool((i == (int)7)) && bool((j == (int)5))))){
									HX_STACK_LINE(123)
									::kriss::Region _g12 = ::kriss::Region_obj::__new(hexa,this->factions->__get((int)2).StaticCast< ::kriss::Faction >());		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(123)
									region = _g12;
								}
								else{
									HX_STACK_LINE(124)
									if (((bool((i == (int)2)) && bool((j == (int)7))))){
										HX_STACK_LINE(125)
										::kriss::Region _g13 = ::kriss::Region_obj::__new(hexa,this->factions->__get((int)3).StaticCast< ::kriss::Faction >());		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(125)
										region = _g13;
									}
									else{
										HX_STACK_LINE(126)
										if (((bool((i == (int)9)) && bool((j == (int)8))))){
											HX_STACK_LINE(127)
											::kriss::Region _g14 = ::kriss::Region_obj::__new(hexa,this->factions->__get((int)4).StaticCast< ::kriss::Faction >());		HX_STACK_VAR(_g14,"_g14");
											HX_STACK_LINE(127)
											region = _g14;
										}
										else{
											HX_STACK_LINE(129)
											::kriss::Region _g15 = ::kriss::Region_obj::__new(hexa,this->factionNeutre);		HX_STACK_VAR(_g15,"_g15");
											HX_STACK_LINE(129)
											region = _g15;
										}
									}
								}
							}
						}
						HX_STACK_LINE(138)
						this->regions->__get(i).StaticCast< Array< ::Dynamic > >()[j] = region;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Carte_obj,drawMap,(void))

Array< ::Dynamic > Carte_obj::getFactions( ){
	HX_STACK_FRAME("kriss.Carte","getFactions",0xeba7f618,"kriss.Carte.getFactions","kriss/Carte.hx",145,0xc1441a66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	return this->factions;
}


HX_DEFINE_DYNAMIC_FUNC0(Carte_obj,getFactions,return )

Array< ::Dynamic > Carte_obj::getRegions( ){
	HX_STACK_FRAME("kriss.Carte","getRegions",0x7dbdce5e,"kriss.Carte.getRegions","kriss/Carte.hx",149,0xc1441a66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(Carte_obj,getRegions,return )

int Carte_obj::getNum_Columns( ){
	HX_STACK_FRAME("kriss.Carte","getNum_Columns",0x88cb1763,"kriss.Carte.getNum_Columns","kriss/Carte.hx",153,0xc1441a66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return this->columns;
}


HX_DEFINE_DYNAMIC_FUNC0(Carte_obj,getNum_Columns,return )

int Carte_obj::getNum_Rows( ){
	HX_STACK_FRAME("kriss.Carte","getNum_Rows",0xcddc5ad3,"kriss.Carte.getNum_Rows","kriss/Carte.hx",157,0xc1441a66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return this->rows;
}


HX_DEFINE_DYNAMIC_FUNC0(Carte_obj,getNum_Rows,return )


Carte_obj::Carte_obj()
{
}

void Carte_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Carte);
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(factionNeutre,"factionNeutre");
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(factions,"factions");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Carte_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(factionNeutre,"factionNeutre");
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(factions,"factions");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Carte_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		if (HX_FIELD_EQ(inName,"drawMap") ) { return drawMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"factions") ) { return factions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRegions") ) { return getRegions_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFactions") ) { return getFactions_dyn(); }
		if (HX_FIELD_EQ(inName,"getNum_Rows") ) { return getNum_Rows_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"factionNeutre") ) { return factionNeutre; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getNum_Columns") ) { return getNum_Columns_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Carte_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"factions") ) { factions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"factionNeutre") ) { factionNeutre=inValue.Cast< ::kriss::Faction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Carte_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("columns"));
	outFields->push(HX_CSTRING("rows"));
	outFields->push(HX_CSTRING("factionNeutre"));
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("factions"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("h"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Carte_obj,columns),HX_CSTRING("columns")},
	{hx::fsInt,(int)offsetof(Carte_obj,rows),HX_CSTRING("rows")},
	{hx::fsObject /*::kriss::Faction*/ ,(int)offsetof(Carte_obj,factionNeutre),HX_CSTRING("factionNeutre")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Carte_obj,regions),HX_CSTRING("regions")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Carte_obj,factions),HX_CSTRING("factions")},
	{hx::fsFloat,(int)offsetof(Carte_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Carte_obj,h),HX_CSTRING("h")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("columns"),
	HX_CSTRING("rows"),
	HX_CSTRING("factionNeutre"),
	HX_CSTRING("regions"),
	HX_CSTRING("factions"),
	HX_CSTRING("w"),
	HX_CSTRING("h"),
	HX_CSTRING("init"),
	HX_CSTRING("drawMap"),
	HX_CSTRING("getFactions"),
	HX_CSTRING("getRegions"),
	HX_CSTRING("getNum_Columns"),
	HX_CSTRING("getNum_Rows"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Carte_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Carte_obj::__mClass,"__mClass");
};

#endif

Class Carte_obj::__mClass;

void Carte_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("kriss.Carte"), hx::TCanCast< Carte_obj> ,sStaticFields,sMemberFields,
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

void Carte_obj::__boot()
{
}

} // end namespace kriss
