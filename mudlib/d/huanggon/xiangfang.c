// Room: /d/huanggon/xiangfang
inherit ROOM;

void create()
{
  set ("short", "�᷿");
  set ("long", @LONG
�᷿��ƽʱ�д�����ס�޵ĵط�,װ�ε�ʮ������,����������ɣƤ
ֽ���˵Ĵ���,����̫ʦ���ӿ����Ӱ���,һ�Ŵ�ľ���Ͱ������ӵ��м�.
���߷��ſ���,���ܿ�����Ժ.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yuanzi",
]));
  setup();
  replace_program(ROOM);
}
