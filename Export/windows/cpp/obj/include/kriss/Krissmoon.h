#ifndef INCLUDED_kriss_Krissmoon
#define INCLUDED_kriss_Krissmoon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS1(kriss,Carte)
HX_DECLARE_CLASS1(kriss,Krissmoon)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
namespace kriss{


class HXCPP_CLASS_ATTRIBUTES  Krissmoon_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Krissmoon_obj OBJ_;
		Krissmoon_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Krissmoon_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Krissmoon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Krissmoon"); }

		virtual Void event_changeColor( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic event_changeColor_dyn();

		static ::kriss::Carte carte;
		static int NUM_ROWS;
		static int NUM_COLUMNS;
};

} // end namespace kriss

#endif /* INCLUDED_kriss_Krissmoon */ 
