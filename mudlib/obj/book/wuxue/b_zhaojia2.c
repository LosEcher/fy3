// 

inherit ITEM;

void create()
{
	set_name("���мܷ����о�",({"zhaojiazhong","zhong"}));
        set_weight(100);
        set("unit", "��");
        set("long",
	 "һ�����ظ񶷷���������ѧ�鼮��\n"
             );
	set("value",2000);
        set("skill", ([
	"name":"parry",
        "exp_required":5000,
        "max_skill":40,
        "sen_cost":20,
        ]) );
}
 
