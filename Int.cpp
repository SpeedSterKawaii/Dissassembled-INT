int __fastcall Random_TF(int a1, unsigned int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // edx
  int v7; // edx
  char v8; // bl
  int *v9; // edx
  int v10; // ecx
  char v11; // cl
  unsigned int v12; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v12 = a2;
  result = *(_DWORD *)(a1 + 104);
  v4 = *(_DWORD *)(a1 + 16);
  for ( i = v4; result; a2 = v12 )
  {
    if ( *(_DWORD *)(result + 8) < a2 )
      return result;
    v5 = result + 16;
    *(_DWORD *)(a1 + 104) = *(_DWORD *)result;
    if ( (*(_BYTE *)(result + 5) & (unsigned __int8)~*(_BYTE *)(v4 + 20) & 3) != 0 )
    {
      if ( *(_DWORD *)(result + 8) != v5 )
      {
        *(_DWORD *)(*(_DWORD *)(result + 20) + 16) = *(_DWORD *)v5;
        *(_DWORD *)(*(_DWORD *)v5 + 20) = *(_DWORD *)(result + 20);
      }
      sub_10044800(32, 0);
      goto LABEL_17;
    }
    *(_DWORD *)(*(_DWORD *)(result + 20) + 16) = *(_DWORD *)v5;
    *(_DWORD *)(*(_DWORD *)v5 + 20) = *(_DWORD *)(result + 20);
    v6 = *(_DWORD **)(result + 8);
    *(_DWORD *)v5 = *v6;
    *(_DWORD *)(result + 20) = v6[1];
    *(_DWORD *)(result + 24) = v6[2];
    *(_DWORD *)(result + 8) = v5;
    v7 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)result = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(v7 + 28) = result;
    v8 = *(_BYTE *)(result + 5);
    if ( (v8 & 7) == 0 )
    {
      if ( *(_BYTE *)(v7 + 21) != 1 )
      {
        v11 = *(_BYTE *)(v7 + 20);
        goto LABEL_15;
      }
      v9 = *(int **)(result + 8);
      v8 |= 4u;
      *(_BYTE *)(result + 5) = v8;
      if ( v9[2] < 4 || (*(_BYTE *)(*v9 + 5) & 3) == 0 )
        goto LABEL_16;
      v10 = *(_DWORD *)(a1 + 16);
      if ( *(_BYTE *)(v10 + 21) != 1 )
      {
        v11 = *(_BYTE *)(v10 + 20);
LABEL_15:
        *(_BYTE *)(result + 5) = v8 & 0xF8 | v11 & 3;
        goto LABEL_16;
      }
     // sub_1003F310();
    }
LABEL_16:
    v4 = i;
LABEL_17:
    result = *(_DWORD *)(a1 + 104);
  }
  return result;
}
