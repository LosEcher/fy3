// Room: /d/huanggon/wdajie
inherit ROOM;

void create()
{
  set ("short", "�����");
  set ("long", @LONG
������������Ľֵ�,�򶫴����찲�Ź㳡.�ֵ�������������,ߺ��
������,��Ϊ�Ǿ���,�ΰ��ܺ�,����������ͦ��.�ϱ�һ����Ӫ,�ſڵı�
ʿ����б�ۿ���.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"qianfengyin",
  "west" : __DIR__"wdajie1",
  "east" : __DIR__"guangchang",
]));
  setup();
  replace_program(ROOM);
}
