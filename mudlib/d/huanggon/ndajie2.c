// Room: /d/huanggon/ndajie2
inherit ROOM;

void create()
{
  set ("short", "�����");
  set ("long", @LONG
����ֺ�ᶫ��,�ӻʹ��ĺ��Ŵ���.�����ֵ�λ�ھ��ǵı���,����
����,��ס�Ķ���Щ�����.�������˶������ɫ.�ֵ������ǼҲ��,���
ʱ��ʱ���������Ȳ�.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"ndajie3",
  "east" : __DIR__"guangchang1",
  "north" : __DIR__"chaguan",
]));
  setup();
  replace_program(ROOM);
}
