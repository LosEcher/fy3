// Room: /d/jinding/pubuding
inherit ROOM;

void create()
{
  set ("short", "�ٲ���");
  set ("long", @LONG
�˴��Ӹ�����,�ٲ���ˮԴ��ʯ���ϵ���ʮ����������ӿ����,��
վ����,�ܿ����ٲ������һ��,��������ˮ����,ˮɫ����,�ں�����
һ�����,����¶����ã.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tianju",
  "down" : __DIR__"dongzhong2",
]));
  setup();
}
