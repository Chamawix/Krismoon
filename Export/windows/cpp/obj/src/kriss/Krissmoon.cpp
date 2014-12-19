#include <hxcpp.h>

#ifndef INCLUDED_kriss_Carte
#include <kriss/Carte.h>
#endif
#ifndef INCLUDED_kriss_Faction
#include <kriss/Faction.h>
#endif
#ifndef INCLUDED_kriss_Krissmoon
#include <kriss/Krissmoon.h>
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
namespace kriss{

Void Krissmoon_obj::__construct()
{
HX_STACK_FRAME("kriss.Krissmoon","new",0x54425ae9,"kriss.Krissmoon.new","kriss/Krissmoon.hx",16,0x23b0b228)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(24)
	int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	int _g1 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	::kriss::Carte _g2 = ::kriss::Carte_obj::__new(_g,_g1,(int)12,(int)12);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	::kriss::Krissmoon_obj::carte = _g2;
	HX_STACK_LINE(27)
	this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->event_changeColor_dyn(),null(),null(),null());
	HX_STACK_LINE(29)
	this->addChild(::kriss::Krissmoon_obj::carte);
}
;
	return null();
}

//Krissmoon_obj::~Krissmoon_obj() { }

Dynamic Krissmoon_obj::__CreateEmpty() { return  new Krissmoon_obj; }
hx::ObjectPtr< Krissmoon_obj > Krissmoon_obj::__new()
{  hx::ObjectPtr< Krissmoon_obj > result = new Krissmoon_obj();
	result->__construct();
	return result;}

Dynamic Krissmoon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Krissmoon_obj > result = new Krissmoon_obj();
	result->__construct();
	return result;}

Void Krissmoon_obj::event_changeColor( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("kriss.Krissmoon","event_changeColor",0xd0bdd737,"kriss.Krissmoon.event_changeColor","kriss/Krissmoon.hx",32,0x23b0b228)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(33)
		Array< ::Dynamic > f = ::kriss::Krissmoon_obj::carte->getFactions();		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			while((true)){
				HX_STACK_LINE(34)
				if ((!(((_g < f->length))))){
					HX_STACK_LINE(34)
					break;
				}
				HX_STACK_LINE(34)
				::kriss::Faction faction = f->__get(_g).StaticCast< ::kriss::Faction >();		HX_STACK_VAR(faction,"faction");
				HX_STACK_LINE(34)
				++(_g);
				HX_STACK_LINE(36)
				faction->attaque();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Krissmoon_obj,event_changeColor,(void))

::kriss::Carte Krissmoon_obj::carte;

int Krissmoon_obj::NUM_ROWS;

int Krissmoon_obj::NUM_COLUMNS;


Krissmoon_obj::Krissmoon_obj()
{
}

Dynamic Krissmoon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"carte") ) { return carte; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"event_changeColor") ) { return event_changeColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Krissmoon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"carte") ) { carte=inValue.Cast< ::kriss::Carte >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Krissmoon_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("carte"),
	HX_CSTRING("NUM_ROWS"),
	HX_CSTRING("NUM_COLUMNS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("event_changeColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Krissmoon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Krissmoon_obj::carte,"carte");
	HX_MARK_MEMBER_NAME(Krissmoon_obj::NUM_ROWS,"NUM_ROWS");
	HX_MARK_MEMBER_NAME(Krissmoon_obj::NUM_COLUMNS,"NUM_COLUMNS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Krissmoon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Krissmoon_obj::carte,"carte");
	HX_VISIT_MEMBER_NAME(Krissmoon_obj::NUM_ROWS,"NUM_ROWS");
	HX_VISIT_MEMBER_NAME(Krissmoon_obj::NUM_COLUMNS,"NUM_COLUMNS");
};

#endif

Class Krissmoon_obj::__mClass;

void Krissmoon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("kriss.Krissmoon"), hx::TCanCast< Krissmoon_obj> ,sStaticFields,sMemberFields,
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

void Krissmoon_obj::__boot()
{
	NUM_ROWS= (int)12;
	NUM_COLUMNS= (int)12;
}

} // end namespace kriss
