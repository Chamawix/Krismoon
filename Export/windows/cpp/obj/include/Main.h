#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
<<<<<<< HEAD
HX_DECLARE_CLASS0(Case)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(nape,util,ShapeDebug)
=======
HX_DECLARE_CLASS0(Faction)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(Region)
>>>>>>> version_remasterisée
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

<<<<<<< HEAD
		Array< ::Dynamic > hexas;
		::nape::space::Space space;
		::nape::util::ShapeDebug debug;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void drawHexagones( int mapx,int mapy,int w,int h);
		Dynamic drawHexagones_dyn();
=======
		Array< ::Dynamic > factions;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void drawMap( int mapx,int mapy,int w,int h);
		Dynamic drawMap_dyn();
>>>>>>> version_remasterisée

		virtual Void event_changeColor( ::openfl::_v2::events::KeyboardEvent e);
		Dynamic event_changeColor_dyn();

		static int NUM_COLUMNS;
		static int NUM_ROWS;
<<<<<<< HEAD
=======
		static ::Faction factionNeutre;
		static Array< ::Dynamic > regions;
>>>>>>> version_remasterisée
};


#endif /* INCLUDED_Main */ 
