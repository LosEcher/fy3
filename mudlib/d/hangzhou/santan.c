// Room: /d/hangzhou/santan.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "��̶ӡ��");
	set("long", @LONG
�������,ˮ������,ԶԶ��ȥ,ˮ����������СС������.���ǵ��� 
�޽��׵�ʱΪ�۲�ˮλ��������������.��Ϊ��̶.�����пգ��������� 
����������Ⱦ���Բ��������֮ҹ�����ں��ϱ�ֽ�����е�ȼ�ƹ⣬�� 
��ӡ����棬����������������ºͼ�����Ӱʵ���ѷ�. 
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "southwest" : __DIR__"wanghu.c",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
