#ifndef INCLUDED_Faction
#define INCLUDED_Faction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Faction)
HX_DECLARE_CLASS0(Region)


class HXCPP_CLASS_ATTRIBUTES  Faction_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Faction_obj OBJ_;
		Faction_obj();
		Void __construct(::String nom,int puissanceAttaque,int puissanceDefense,int couleur);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Faction_obj > __new(::String nom,int puissanceAttaque,int puissanceDefense,int couleur);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Faction_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Faction"); }

		::String nom;
		Array< ::Dynamic > territoire;
		Array< ::Dynamic > frontiere;
		int puissanceAttaque;
		int puissanceDefense;
		int couleur;
		virtual Void attaque( );
		Dynamic attaque_dyn();

		virtual Void ajoutTerritoire( ::Region region);
		Dynamic ajoutTerritoire_dyn();

		virtual Void retraitTerritoire( ::Region region);
		Dynamic retraitTerritoire_dyn();

};


#endif /* INCLUDED_Faction */ 
