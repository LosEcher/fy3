// Room: /d/yanjing/kefang
inherit ROOM;

void create()
{
  set ("short", "�ͷ�");
  set ("long", @LONG
һ�����ӿ��Ŵ���,һ���Ȼ���שͷ����,���ϵ������Ǵ��鲼����,��
�˼�������,�߽ŵĵط��������,�ݽǵĵ����л���һЩˮ,һ�����ŵ�ζ��
Ѭ����ֻ���ܳ�ȥ.
LONG);

set("sleep_room",1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"tianjin",
]));
  setup();
  replace_program(ROOM);
}
