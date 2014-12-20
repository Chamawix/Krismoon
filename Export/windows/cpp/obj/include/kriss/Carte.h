#ifndef INCLUDED_kriss_Carte
#define INCLUDED_kriss_Carte

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS1(kriss,Carte)
HX_DECLARE_CLASS1(kriss,Faction)
HX_DECLARE_CLASS1(kriss,Region)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace kriss{


class HXCPP_CLASS_ATTRIBUTES  Carte_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Carte_obj OBJ_;
		Carte_obj();
		Void __construct(Float width,Float height,int nrows,int ncolumns);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Carte_obj > __new(Float width,Float height,int nrows,int ncolumns);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Carte_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Carte"); }

		int columns;
		int rows;
		::kriss::Faction factionNeutre;
		Array< ::Dynamic > regions;
		Array< ::Dynamic > factions;
		Float w;
		Float h;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void drawMap( int mapx,int mapy,int w,int h);
		Dynamic drawMap_dyn();

		virtual Array< ::Dynamic > getFactions( );
		Dynamic getFactions_dyn();

		virtual Array< ::Dynamic > getRegions( );
		Dynamic getRegions_dyn();

		virtual int getNum_Columns( );
		Dynamic getNum_Columns_dyn();

		virtual int getNum_Rows( );
		Dynamic getNum_Rows_dyn();

};

} // end namespace kriss

#endif /* INCLUDED_kriss_Carte */ 
