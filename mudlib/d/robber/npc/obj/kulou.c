inherit ITEM;

void create()
{
	set_name("�׹�����",({"kulou"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
	else {
	    set("long",
     	        "�Ұ׵����ã�¶�����Ʋ�ȫ�����ݣ��ƺ�����Ц��\n");
	    set("unit","��");
	    set("value",0);
	}
  setup();
}
