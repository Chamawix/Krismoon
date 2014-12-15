#ifndef INCLUDED_Region
#define INCLUDED_Region

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Case)
HX_DECLARE_CLASS0(Faction)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Region)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Region_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Region_obj OBJ_;
		Region_obj();
		Void __construct(::Case h,::Faction nouvelleFaction);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Region_obj > __new(::Case h,::Faction nouvelleFaction);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Region_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Region"); }

		::Case hexa;
		::Faction faction;
		::haxe::ds::StringMap listeVoisins;
		Array< ::String > regionAllie;
		Array< ::String > regionEnnemie;
		virtual Void changement_Faction( ::Faction nouvelleFaction);
		Dynamic changement_Faction_dyn();

		virtual ::haxe::ds::StringMap voisins( );
		Dynamic voisins_dyn();

		virtual Void getVoisins( );
		Dynamic getVoisins_dyn();

		virtual ::Faction getFaction( );
		Dynamic getFaction_dyn();

		virtual Void typeVoisins( );
		Dynamic typeVoisins_dyn();

		virtual Array< ::String > getEnnemie( );
		Dynamic getEnnemie_dyn();

		virtual Array< ::String > getAllie( );
		Dynamic getAllie_dyn();

		virtual Void attaqueZone( ::String orientation);
		Dynamic attaqueZone_dyn();

};


#endif /* INCLUDED_Region */ 
