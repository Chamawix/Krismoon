#ifndef INCLUDED_kriss_Case
#define INCLUDED_kriss_Case

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS1(kriss,Case)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace kriss{


class HXCPP_CLASS_ATTRIBUTES  Case_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Case_obj OBJ_;
		Case_obj();
		Void __construct(int colonne,int ligne,Float x,Float y,hx::Null< int >  __o_color,hx::Null< int >  __o_rad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Case_obj > __new(int colonne,int ligne,Float x,Float y,hx::Null< int >  __o_color,hx::Null< int >  __o_rad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Case_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Case"); }

		int colonne;
		int ligne;
		int couleur;
		int groupe;
		Float posx;
		Float posy;
		int radius;
		virtual Void drawOneHexa( );
		Dynamic drawOneHexa_dyn();

		virtual Void updateHexa( int color);
		Dynamic updateHexa_dyn();

		virtual Void deleteHexa( );
		Dynamic deleteHexa_dyn();

};

} // end namespace kriss

#endif /* INCLUDED_kriss_Case */ 
