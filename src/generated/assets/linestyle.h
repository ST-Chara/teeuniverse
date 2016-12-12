/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#ifndef __CLIENT_ASSETS_LINESTYLE__
#define __CLIENT_ASSETS_LINESTYLE__

#include <shared/assets/asset.h>
#include <shared/assets/assetpath.h>

class CAsset_LineStyle : public CAsset
{
public:
	static const int TypeId = 28;
	
	enum
	{
		NAME = CAsset::NAME,
		SPRITEPATH,
	};
	
	class CTuaType : public CAsset::CTuaType
	{
	public:
		CAssetPath::CTuaType m_SpritePath;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType& TuaType, CAsset_LineStyle& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_LineStyle& SysType, CTuaType& TuaType);
	};
	

private:
	CAssetPath m_SpritePath;

public:
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int DeleteSubItem(const CSubPath& SubPath);
	
	void copy(const CAsset_LineStyle& Item)
	{
		CAsset::copy(Item);
		m_SpritePath = Item.m_SpritePath;
	}
	
	void transfert(CAsset_LineStyle& Item)
	{
		CAsset::transfert(Item);
		m_SpritePath = Item.m_SpritePath;
	}
	
	inline CAssetPath GetSpritePath() const { return m_SpritePath; }
	
	inline void SetSpritePath(const CAssetPath& Value) { m_SpritePath = Value; }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_SpritePath);
	}
	
};

template<> CAssetPath CAsset_LineStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_LineStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif