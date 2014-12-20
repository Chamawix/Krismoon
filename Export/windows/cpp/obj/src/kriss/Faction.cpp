#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_kriss_Faction
#include <kriss/Faction.h>
#endif
#ifndef INCLUDED_kriss_Region
#include <kriss/Region.h>
#endif
namespace kriss{

Void Faction_obj::__construct(::String nom,int puissanceAttaque,int puissanceDefense,int couleur)
{
HX_STACK_FRAME("kriss.Faction","new",0xa0446702,"kriss.Faction.new","kriss/Faction.hx",5,0x9f6f59ef)
HX_STACK_THIS(this)
HX_STACK_ARG(nom,"nom")
HX_STACK_ARG(puissanceAttaque,"puissanceAttaque")
HX_STACK_ARG(puissanceDefense,"puissanceDefense")
HX_STACK_ARG(couleur,"couleur")
{
	HX_STACK_LINE(10)
	this->frontiere = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(8)
	this->territoire = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(20)
	this->nom = nom;
	HX_STACK_LINE(21)
	this->puissanceAttaque = puissanceAttaque;
	HX_STACK_LINE(22)
	this->puissanceDefense = puissanceDefense;
	HX_STACK_LINE(23)
	this->couleur = couleur;
}
;
	return null();
}

//Faction_obj::~Faction_obj() { }

Dynamic Faction_obj::__CreateEmpty() { return  new Faction_obj; }
hx::ObjectPtr< Faction_obj > Faction_obj::__new(::String nom,int puissanceAttaque,int puissanceDefense,int couleur)
{  hx::ObjectPtr< Faction_obj > result = new Faction_obj();
	result->__construct(nom,puissanceAttaque,puissanceDefense,couleur);
	return result;}

Dynamic Faction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Faction_obj > result = new Faction_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Faction_obj::attaque( ){
{
		HX_STACK_FRAME("kriss.Faction","attaque",0xe7d48b83,"kriss.Faction.attaque","kriss/Faction.hx",33,0x9f6f59ef)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		bool atqDone = false;		HX_STACK_VAR(atqDone,"atqDone");
		HX_STACK_LINE(40)
		int l = this->territoire->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(42)
		int count = (int)0;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			if ((!((!(atqDone))))){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(46)
			(count)++;
			HX_STACK_LINE(48)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(48)
			Float _g1 = (_g * this->territoire->length);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(48)
			int i = ::Std_obj::_int(_g1);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(50)
			this->territoire->__get(i).StaticCast< ::kriss::Region >()->typeVoisins();
			HX_STACK_LINE(53)
			if (((bool((this->territoire->__get(i).StaticCast< ::kriss::Region >()->getEnnemie()->length == (int)0)) && bool((count > (int)225))))){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(55)
			if (((this->territoire->__get(i).StaticCast< ::kriss::Region >()->getEnnemie()->length == (int)0))){
				HX_STACK_LINE(55)
				continue;
			}
			HX_STACK_LINE(57)
			Array< ::String > atq = this->territoire->__get(i).StaticCast< ::kriss::Region >()->getEnnemie();		HX_STACK_VAR(atq,"atq");
			HX_STACK_LINE(58)
			Float _g2 = ::Math_obj::random();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(58)
			Float _g3 = (atq->length * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(58)
			int indice = ::Std_obj::_int(_g3);		HX_STACK_VAR(indice,"indice");
			HX_STACK_LINE(60)
			this->territoire->__get(i).StaticCast< ::kriss::Region >()->attaqueZone(atq->__get(indice));
			HX_STACK_LINE(64)
			atqDone = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Faction_obj,attaque,(void))

Void Faction_obj::ajoutTerritoire( ::kriss::Region region){
{
		HX_STACK_FRAME("kriss.Faction","ajoutTerritoire",0xd2779030,"kriss.Faction.ajoutTerritoire","kriss/Faction.hx",79,0x9f6f59ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(region,"region")
		HX_STACK_LINE(79)
		this->territoire->push(region);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Faction_obj,ajoutTerritoire,(void))

Void Faction_obj::retraitTerritoire( ::kriss::Region region){
{
		HX_STACK_FRAME("kriss.Faction","retraitTerritoire",0x9d1ff026,"kriss.Faction.retraitTerritoire","kriss/Faction.hx",86,0x9f6f59ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(region,"region")
		HX_STACK_LINE(86)
		this->territoire->remove(region);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Faction_obj,retraitTerritoire,(void))

::String Faction_obj::getNom( ){
	HX_STACK_FRAME("kriss.Faction","getNom",0x2a48ccb4,"kriss.Faction.getNom","kriss/Faction.hx",90,0x9f6f59ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return this->nom;
}


HX_DEFINE_DYNAMIC_FUNC0(Faction_obj,getNom,return )


Faction_obj::Faction_obj()
{
}

void Faction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Faction);
	HX_MARK_MEMBER_NAME(nom,"nom");
	HX_MARK_MEMBER_NAME(territoire,"territoire");
	HX_MARK_MEMBER_NAME(frontiere,"frontiere");
	HX_MARK_MEMBER_NAME(puissanceAttaque,"puissanceAttaque");
	HX_MARK_MEMBER_NAME(puissanceDefense,"puissanceDefense");
	HX_MARK_MEMBER_NAME(couleur,"couleur");
	HX_MARK_END_CLASS();
}

void Faction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nom,"nom");
	HX_VISIT_MEMBER_NAME(territoire,"territoire");
	HX_VISIT_MEMBER_NAME(frontiere,"frontiere");
	HX_VISIT_MEMBER_NAME(puissanceAttaque,"puissanceAttaque");
	HX_VISIT_MEMBER_NAME(puissanceDefense,"puissanceDefense");
	HX_VISIT_MEMBER_NAME(couleur,"couleur");
}

Dynamic Faction_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nom") ) { return nom; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getNom") ) { return getNom_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"couleur") ) { return couleur; }
		if (HX_FIELD_EQ(inName,"attaque") ) { return attaque_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frontiere") ) { return frontiere; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"territoire") ) { return territoire; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ajoutTerritoire") ) { return ajoutTerritoire_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"puissanceAttaque") ) { return puissanceAttaque; }
		if (HX_FIELD_EQ(inName,"puissanceDefense") ) { return puissanceDefense; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"retraitTerritoire") ) { return retraitTerritoire_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Faction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nom") ) { nom=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"couleur") ) { couleur=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frontiere") ) { frontiere=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"territoire") ) { territoire=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"puissanceAttaque") ) { puissanceAttaque=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"puissanceDefense") ) { puissanceDefense=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Faction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nom"));
	outFields->push(HX_CSTRING("territoire"));
	outFields->push(HX_CSTRING("frontiere"));
	outFields->push(HX_CSTRING("puissanceAttaque"));
	outFields->push(HX_CSTRING("puissanceDefense"));
	outFields->push(HX_CSTRING("couleur"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Faction_obj,nom),HX_CSTRING("nom")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Faction_obj,territoire),HX_CSTRING("territoire")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Faction_obj,frontiere),HX_CSTRING("frontiere")},
	{hx::fsInt,(int)offsetof(Faction_obj,puissanceAttaque),HX_CSTRING("puissanceAttaque")},
	{hx::fsInt,(int)offsetof(Faction_obj,puissanceDefense),HX_CSTRING("puissanceDefense")},
	{hx::fsInt,(int)offsetof(Faction_obj,couleur),HX_CSTRING("couleur")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nom"),
	HX_CSTRING("territoire"),
	HX_CSTRING("frontiere"),
	HX_CSTRING("puissanceAttaque"),
	HX_CSTRING("puissanceDefense"),
	HX_CSTRING("couleur"),
	HX_CSTRING("attaque"),
	HX_CSTRING("ajoutTerritoire"),
	HX_CSTRING("retraitTerritoire"),
	HX_CSTRING("getNom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Faction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Faction_obj::__mClass,"__mClass");
};

#endif

Class Faction_obj::__mClass;

void Faction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("kriss.Faction"), hx::TCanCast< Faction_obj> ,sStaticFields,sMemberFields,
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

void Faction_obj::__boot()
{
}

} // end namespace kriss
