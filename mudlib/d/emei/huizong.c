// Room: /u/xxy/room/huizong
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
�������ڿտյ���,�������еĵط�����һ�Ÿ�̨,�����������
��λ,�ֱ�������Ĳ��Ĵ������������,���̴�ʼ�˵Ļ�������,��½
�ߵ���λ,ȡ���̻���֮��
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"baoenshi",
  "north" : __DIR__"qifodian",
  "west" : __DIR__"qixiang",
]));
  setup();
  replace_program(ROOM);

}
