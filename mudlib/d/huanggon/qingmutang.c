// Room: /d/huanggon/qingmutang
inherit ROOM;

void create()
{
  set ("short", "��ľ�ÿ�");
  set ("long", @LONG
��������ػ���ľ���ھ�ʦ�ľݵ�.������Ͽ�,ֻ��һ����ͨ�Ĵ�
��Ժ.��ǰ�����Ҷ�ģ���������ڳ�����ĬĬ����,һЩ������ڵ���,��
�ȵ�ϡ��.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"yuanzi",
  "south" : __DIR__"tianwell",
]));
  setup();
  replace_program(ROOM);
}
